#include "baseFilter.h"

baseFilter::baseFilter(const QImage &src, const container<bool> &damaged) noexcept
    :picture{src}, missingPixels(damaged), restoredPixels(src.width(), src.height())
{}

void baseFilter::setFixedPixel(const coord &position, const bool state) noexcept
{
    missingPixels[position] = state;
    restoredPixels[position] = state;
}
