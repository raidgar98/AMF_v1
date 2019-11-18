#include "DmgMap.h"

DmgMap::DmgMap(QImage &i_raw, QImage &i_dmg)
    :m_raw{i_raw},m_dmg{i_dmg}
{}
DmgMap::DmgMap(const DmgMap& i_src)
    :m_raw{i_src.m_raw},m_dmg{i_src.m_dmg},m_map{i_src.m_map},m_2Dwidth{i_src.m_2Dwidth},m_2Dheight{i_src.m_2Dheight}
{
    try
    {
        if(i_src.m_2Dmap != nullptr)
        {
            m_2Dmap= new bool*[m_2Dheight];
            m_2Dmap[0] = new bool[m_2Dheight*m_2Dwidth];
                for (size_t i = 1; i < m_2Dheight; i++)
                    m_2Dmap[i] = &m_2Dmap[0][i*m_2Dwidth];

        }
    }
    catch(std::exception& err)
    {
        qInfo()<<"Error copy contructor: "<<err.what();
    }
}
DmgMap::DmgMap(DmgMap&& i_src)
    :m_raw{i_src.m_raw},m_dmg{i_src.m_dmg},m_map{i_src.m_map},m_2Dwidth{i_src.m_2Dwidth},m_2Dheight{i_src.m_2Dheight}
{
    try
    {
        if(i_src.m_2Dmap!=nullptr)
         {
             m_2Dmap[0][0]=&i_src.m_2Dmap[0][0];
             i_src.m_2Dmap=nullptr;
         }
    i_src.~DmgMap();
    }
    catch (std::exception& err)
    {
       qInfo()<<"Error move contructor: "<<err.what();
    }
}

void DmgMap::release2Dtab()
{
    try
    {
       if(m_2Dmap!=nullptr)
        {
           delete[] m_2Dmap[0];
           m_2Dmap=nullptr;
           m_2Dwidth=0;
           m_2Dheight=0;
        }
    }
    catch(std::exception &err)
    {
        std::cout<<err.what();
    }
}

DmgMap::~DmgMap()
{
    /*
    if(map_R != nullptr)
    {
        delete[] map_R;
        map_R = nullptr;
    }

    if(map_G != nullptr)
    {
        delete[] map_G;
        map_G = nullptr;
    }

    if(map_B != nullptr)
    {
        delete[] map_B;
        map_B = nullptr;
    }
    */
    release2Dtab();
}

void DmgMap::makeMapImages()
{
    if(!m_raw.isNull() && !m_dmg.isNull()  && m_raw.width()==m_dmg.width() && m_raw.height()==m_dmg.height())
        {


            int m_imageWidth=m_raw.width();
            int m_imageHeight=m_raw.height();
            //m_map=m_raw;
            m_map=QImage(m_imageWidth,m_imageHeight,QImage::Format_RGB32);
            for (int i=0;i<m_imageWidth;i++)
            {
                for (int  j=0;j<m_imageHeight;j++)
                {
                    if(m_raw.pixel(i,j)==m_dmg.pixel(i,j))
                        m_map.setPixel(i,j,qRgb(0,0,0));
                    else
                        m_map.setPixel(i,j,qRgb(255,255,255));
                }
            }

        }
}
bool DmgMap::isPixelSame(short *raw_R, short *raw_G, short *raw_B, short *dmg_R, short *dmg_G, short *dmg_B,int coord)
{
    try
    {
     if(raw_R[coord]==dmg_R[coord] && raw_G[coord]==dmg_G[coord] && raw_B[coord]==dmg_B[coord])
            return true;
        else
           return false;
    }
    catch(std::exception& err)
    {
        std::cout<<err.what();
        return false;
    }
}
void DmgMap::make2DMap(short ** i_rawR,short ** i_rawG,short ** i_rawB, short ** i_dmgR,short ** i_dmgG,short ** i_dmgB, size_t i_width,size_t i_height)
{
    try
    {
        release2Dtab();
        if(m_2Dmap == nullptr)
        {

                m_2Dmap= new bool*[i_height];
                m_2Dmap[0] = new bool[i_height*i_width];
                for (size_t i = 1; i < i_height; i++)
                    m_2Dmap[i] = &m_2Dmap[0][i*i_width];
        }

        for(size_t i=0;i<i_width;i++)
            for(size_t j=0; j<i_height;j++)
            {
                 if(i_rawR[i][j]==i_dmgR[i][j] && i_rawG[i][j]==i_dmgG[i][j] && i_rawB[i][j]==i_dmgB[i][j])
                    m_2Dmap[i][j]=true;
                 else
                     m_2Dmap[i][j]=false;
            }
    }
    catch(std::exception& err)
    {
        qInfo()<<"Erorr make2Dmap method: "<<err.what();
    }
}

