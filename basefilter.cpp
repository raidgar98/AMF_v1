#include "baseFilter.h"

baseFilter::~baseFilter()
{
    if (fixedPixelMap != nullptr)
    {
        delete[] fixedPixelMap[0];
        delete[] fixedPixelMap;
        picture = nullptr;
    }
};

void baseFilter::setFixedPixel(int xPixel, int yPixel)
{
    if (fixedPixelMap != nullptr && xPixel<pictureLeght &&yPixel<pictureHeight)
    {
        fixedPixelMap[xPixel][yPixel] = 1;
    }
}

void baseFilter::takePicture(short *** tabRGB, uint32_t iHeight, uint32_t iLenght)
{
    picture = tabRGB;
    if (pictureHeight<iHeight || pictureLeght<iLenght)
    {
        delete[] fixedPixelMap[0];
        delete[] fixedPixelMap;
        fixedPixelMap = new uint32_t*[iHeight];
        fixedPixelMap[0] = new uint32_t[iHeight*iLenght];
        for (size_t i = 1; i < iHeight; i++)
        {
            fixedPixelMap[i] = &fixedPixelMap[0][i*iLenght];
        }
    }
    pictureHeight = iHeight;
    pictureLeght = iLenght;
    memset(fixedPixelMap, 0, pictureHeight*pictureLeght* sizeof(uint32_t));
};
