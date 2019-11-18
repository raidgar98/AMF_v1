#include "DmgMap.h"

DmgMap::DmgMap(QImage &i_raw, QImage &i_dmg)
    :m_raw{i_raw},m_dmg{i_dmg}
{}
DmgMap::DmgMap(const DmgMap& i_src)
    :m_raw{i_src.m_raw},m_dmg{i_src.m_dmg},m_map{i_src.m_map}
{}
DmgMap::DmgMap(DmgMap&& i_src)
    :m_raw{i_src.m_raw},m_dmg{i_src.m_dmg},m_map{i_src.m_map}
{
    i_src.~DmgMap();
}

void DmgMap::makeMap()
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
