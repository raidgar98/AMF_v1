#pragma once
#include <QImage>

class DmgMap
{
protected:
    QImage m_raw;
    QImage m_dmg;
    QImage m_map;

    void makeMap() ;

public:
    DmgMap()=default;
    DmgMap(QImage &i_raw,QImage &i_dmg);
    ~DmgMap()=default;
    DmgMap(const DmgMap&);
    DmgMap(DmgMap&&);

    void setRaw(QImage &i_raw) { if(!i_raw.isNull()) m_raw=i_raw; }
    void setDmg(QImage &i_dmg) { if(!i_dmg.isNull()) m_dmg=i_dmg; }
    void setBoth(QImage &i_raw, QImage &i_dmg) { setRaw(i_raw); setDmg(i_dmg); }

    QImage getRaw() const { return m_raw; }
    QImage getDmg() const { return m_dmg; }
    QImage getMap() { if(m_map.isNull()) makeMap(); return m_map; }
};

