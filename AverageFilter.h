#pragma once
#include <QImage>
#include "DmgMap.h"
#include "baseFilter.h"

#include <set>

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

    std::vector<coord> broken_points;

public:

AverageFilter() = delete;
AverageFilter(std::vector<coord> const &i_dmpmap, const QImage& i_image);

void setObjectToFix(QImage i_Image) { takePicture(i_Image); }
//void setMap(DmgMap &i_compareM) { m_compareMask = i_compareM; }
void setParameters(const std::vector<double>& iParameters) override;
void getFixedPicture(QImage& pic) const;

virtual void Correction() override;

};
