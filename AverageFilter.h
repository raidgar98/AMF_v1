#pragma once
#include <QImage>
#include "DmgMap.h"
#include "baseFilter.h"

constexpr size_t NUM_PIX = 9;

class AverageFilter
        : public baseFilter
{
private:

    enum
    {
        NIE_USTAWIONO = -1,
        ZAPIS_JAKO_ZDJECIE = 0,
        ZAPIS_JAKO_MASKA_3D = 1
    }m_Param{ NIE_USTAWIONO };

    DmgMap m_compareMask;

public:

AverageFilter() = delete;
AverageFilter(DmgMap const &i_dmpmap, const QImage& i_image);

void setObjectToFix(QImage i_Image) { takePicture(i_Image); }
void setMap(DmgMap &i_compareM) { m_compareMask = i_compareM; }
void setParameters(const vector<double>& iParameters) override;
void getFixedPicture(QImage& pic) const;

virtual void Correction() override;

};
