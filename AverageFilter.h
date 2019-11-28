#pragma once
#include <QImage>
#include "DmgMap.h"
#include "baseFilter.h"

constexpr size_t NUM_PIX = 9;

class AverageFilter
        : public baseFilter
{
private:
    enum  Color
    {

        R=0,
        G=1,
        B=2

    };
double m_Param{-1};
DmgMap m_compareMask;
QImage m_PicToFix;


public:

AverageFilter() = delete;
AverageFilter(DmgMap const &i_dmpmap,QImage i_image);
AverageFilter(DmgMap const &i_dmpmap,short *** i_mask,size_t i_width,size_t i_height);
AverageFilter(DmgMap const &i_dmpmap, baseFilter const &i_baseFilter);
~AverageFilter();

AverageFilter& operator=(const AverageFilter& i_src);
AverageFilter& operator=(AverageFilter&& i_src);

void setObjectToFix(QImage i_Image) { m_PicToFix = i_Image; }
void setMap(DmgMap &i_compareM) {m_compareMask = i_compareM; }
void setParameters(vector<double> iParameters) override {if((iParameters.size()==1 && iParameters.at(0)==1.0) || iParameters.at(0)==0.0) m_Param=iParameters.at(0);}
QImage getFixedPicture() const {return m_PicToFix;}


virtual void Correction() override;

};
