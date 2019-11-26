#include "DmgMap.h"

DmgMap::DmgMap(QImage &i_raw, QImage &i_dmg)
    :m_raw{i_raw},m_dmg{i_dmg}
{}
DmgMap::DmgMap(size_t i_width,size_t i_height)
{
    m_2Dmap= new bool*[i_height];
    m_2Dmap[0] = new bool[i_height*i_width];
    for (size_t i = 1; i < i_height; i++)
        m_2Dmap[i] = &m_2Dmap[0][i*i_width];

    for (size_t i = 0; i < i_height; i++)
          for (size_t j = 0; j < i_height; j++)
              m_2Dmap[i][j]=true;
}

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

DmgMap& DmgMap::operator=(const DmgMap& i_src)
{
    try
    {
        m_raw=i_src.m_raw;
        m_dmg=i_src.m_dmg;
        m_map=i_src.m_map;
        m_2Dwidth=i_src.m_2Dwidth;
        m_2Dheight=i_src.m_2Dheight;
        if(i_src.m_2Dmap!=nullptr)
        {
            m_2Dmap= new bool*[m_2Dheight];
            m_2Dmap[0] = new bool[m_2Dheight*m_2Dwidth];
                for (size_t i = 1; i < m_2Dheight; i++)
                    m_2Dmap[i] = &m_2Dmap[0][i*m_2Dwidth];
        }
    } catch (std::exception& err)
     {
        qInfo()<<"Error copy operator: "<<err.what();
      }
    return *this;
}

DmgMap& DmgMap::operator=(DmgMap&& i_src)
{
    try
    {
        m_raw=i_src.m_raw;
        m_dmg=i_src.m_dmg;
        m_map=i_src.m_map;
        m_2Dwidth=i_src.m_2Dwidth;
        m_2Dheight=i_src.m_2Dheight;
        if(i_src.m_2Dmap!=nullptr)
        {
            m_2Dmap[0][0]=&i_src.m_2Dmap[0][0];
            i_src.m_2Dmap=nullptr;
        }
        i_src.~DmgMap();
    } catch (std::exception& err)
     {
        qInfo()<<"Error move operator: "<<err.what();
      }
    return *this;
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
        qInfo()<<"Error release2Dtab method: "<<err.what();
    }
}

DmgMap::~DmgMap()
{

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
        qInfo()<<"Error isPixelSame method: "<<err.what();
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

void DmgMap::make3Dmap(short ***i_raw,short ***i_dmg,size_t i_width,size_t i_height)
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
                 if(i_raw[i][j][R]==i_dmg[i][j][R] && i_raw[i][j][G]==i_dmg[i][j][G] && i_raw[i][j][B]==i_dmg[i][j][B])
                    m_2Dmap[i][j]=true;
                 else
                     m_2Dmap[i][j]=false;
            }
    }
    catch(std::exception& err)
    {
        qInfo()<<"Erorr make3Dmap method: "<<err.what();
    }
}
void DmgMap::setDamagedPixel(size_t i_x,size_t i_y)
{
    m_2Dmap[i_x][i_y]=false;
}



