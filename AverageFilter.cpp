#include "AverageFilter.h"
#include "utility.h"

AverageFilter::AverageFilter(QImage const & src, const container<bool>& damaged) noexcept
    :baseFilter (src, damaged)
{}

void AverageFilter::getFixedPicture(QImage& pic) const noexcept
{
    picture.render(pic);
}

void AverageFilter::Correction()
{
    for(auto& var : missingPixels)
    {
        picture(var.first) = picture.get_square(picture(var.first)).average();
        setFixedPixel(var.first, true);
    }
}
