#pragma once
#include <QImage>
#include "DmgMap.h"
#include "baseFilter.h"
#include "global_settings.h"

constexpr size_t NUM_PIX = 9;

class AverageFilter
        : public baseFilter
{
private:
    enum Color
    {

        R=0,
        G=1,
        B=2

    };
DmgMap m_compareMask;
QImage m_PicToFix;
short *** m_MaskToFix;

public:
AverageFilter();
AverageFilter(DmgMap const &i_dmpmap,QImage i_image);
AverageFilter(DmgMap const &i_dmpmap,short *** i_mask);
~AverageFilter();
void setObjectToFix(QImage i_Image) { m_PicToFix = i_Image; }
void setObjectToFix(short *** i_3Dmask) { m_MaskToFix = i_3Dmask; }
void setMap(DmgMap &i_compareM) {m_compareMask = i_compareM; }

QImage getFixedPicture() const {return m_PicToFix;}
short *** getFixedMask() const {return m_MaskToFix;}

vector <double> getParameters();


virtual void Correction() override;

};
