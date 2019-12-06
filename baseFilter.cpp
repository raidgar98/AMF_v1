#include "baseFilter.h"

baseFilter::baseFilter(const QImage &src, const container &damaged) noexcept
    :picture{src}, missingPixels(damaged)
{}

void baseFilter::setFixedPixel(const coord &position, const bool state) noexcept
{
    missingPixels[position] = state;
    restoredPixels[position] = state;
}
