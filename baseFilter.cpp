#include "baseFilter.h"
#include <cstring>
#include <QDebug>

baseFilter::baseFilter(const QImage &src)
    :picture{ src }
{
    fixedPixelMap.reset( new array_pointer_member<bool>[picture.width()] );
    for(size_t i = 0; i < picture.width(); i++)
        fixedPixelMap[i].reset( new bool[ picture.height() ] );
}

void baseFilter::setFixedPixel(const size_t xPixel, const size_t yPixel, const bool state)
{
    if (fixedPixelMap != nullptr && xPixel < picture.width() && yPixel < picture.height())
        fixedPixelMap[xPixel][yPixel] = state;
}

void baseFilter::takePicture(const QImage &src)
{
    picture = src;

    fixedPixelMap.reset( new array_pointer_member<bool>[picture.width()] );
    for(size_t i = 0; i < picture.width(); i++)
        fixedPixelMap[i].reset( new bool[ picture.height() ] );
}
