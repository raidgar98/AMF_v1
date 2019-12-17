#include "AverageFilter.h"
#include "utility.h"

AverageFilter::AverageFilter(QImage const & src, const container& damaged) noexcept
    :baseFilter (src, damaged)
{}

void AverageFilter::Correction()
{
    for(auto& var : missingPixels)
    {
        picture(var.first) = picture.get_square(picture(var.first)).average();
        setFixedPixel(var.first, true);
    }
}
