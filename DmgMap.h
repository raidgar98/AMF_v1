#pragma once
#include <QImage>
#include <iostream>
#include <QtDebug>
class DmgMap
{
protected:
    QImage m_raw;
    QImage m_dmg;
    QImage m_map;

   // std::shared_ptr<short>;
   // short * map_R = nullptr;
   // short * map_G = nullptr;
   // short * map_B = nullptr;
    bool ** m_2Dmap = nullptr;
    unsigned int m_2Dwidth;
    unsigned int m_2Dheight;

    void release2Dtab() ;



public:
    DmgMap()=default;
    DmgMap(QImage &i_raw,QImage &i_dmg);
    ~DmgMap();
    DmgMap(const DmgMap&);
    DmgMap(DmgMap&&);

    void makeMapImages() ;
    void make2DMap(short ** i_rawR,short ** i_rawG,short ** i_rawB, short ** i_dmgR,short ** i_dmgG,short ** i_dmgB, size_t i_width,size_t i_height);
    bool isPixelSame(short *raw_R,short *raw_G,short *raw_B,short *dmg_R,short *dmg_G,short *dmg_B,int coord);

    void setRaw(QImage &i_raw) { if(!i_raw.isNull()) m_raw=i_raw; }
    void setDmg(QImage &i_dmg) { if(!i_dmg.isNull()) m_dmg=i_dmg; }
    void setBoth(QImage &i_raw, QImage &i_dmg) { setRaw(i_raw); setDmg(i_dmg); }

    QImage getRaw() const { return m_raw; }
    QImage getDmg() const { return m_dmg; }
    QImage getMap() { if(m_map.isNull()) makeMapImages(); return m_map; }
    //short * getMapR(){return map_R;}
    //short * getMapG(){return map_G;}
    //short * getMapB(){return map_B;}
    bool ** get2Dmap(){ return m_2Dmap; }
};

