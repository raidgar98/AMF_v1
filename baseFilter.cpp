#include "baseFilter.h"

baseFilter::baseFilter()
{
}

baseFilter::baseFilter(short ***tabRGB, uint32_t iHeight, uint32_t iLenght)
{
	this->takePicture(tabRGB, iHeight, iLenght);
}

baseFilter::~baseFilter()
{
	if (fixedPixelMap != nullptr) 
	{ 
		if (fixedPixelMap != nullptr)
		{
			delete[] fixedPixelMap[0];
			delete[] fixedPixelMap;
		}
		if (picture != nullptr)
		{
			delete[] picture[0][0];
			delete[] picture[0];
			delete[] picture;
		}
	}
};

void baseFilter::setFixedPixel(int xPixel, int yPixel)
{
	if (fixedPixelMap != nullptr && xPixel<pictureLenght &&yPixel<pictureHeight)
	{
		fixedPixelMap[xPixel][yPixel] = 1;
	}
}

void baseFilter::takePicture(short *** tabRGB, uint32_t iHeight, uint32_t iLenght)
{
	
	if (pictureHeight<iHeight || pictureLenght<iLenght)
	{
		//porz¹dkowanie mapy naprawionych pikseli
		if (fixedPixelMap != nullptr)
		{
			delete[] fixedPixelMap[0];
			delete[] fixedPixelMap;
		}
		fixedPixelMap = new uint32_t*[iHeight];
		fixedPixelMap[0] = new uint32_t[iHeight*iLenght];
		for (size_t i = 1; i < iHeight; i++)
		{
			fixedPixelMap[i] = &fixedPixelMap[0][i*iLenght];
		}
		if (picture != nullptr)
		{
			delete[] picture[0][0];
			delete[] picture[0];
			delete[] picture;
		}

		//porz¹dkowanie obrazu
		short*** picture = new short**[iHeight];
		picture[0] = new short*[iHeight*iLenght];
		for (size_t i = 1; i < iHeight; i++)
		{
			picture[i] = &picture[0][i*iLenght];
		}
		picture[0][0] = new short[iHeight*iLenght * 3];
		for (size_t i = 1; i < iHeight*iLenght; i++)
		{
			picture[0][i] = &picture[0][0][i * 3];
		}
	}

	//przypisanie wartoœci pocz¹tkowych
	pictureHeight = iHeight; 
	pictureLenght = iLenght;
	std::memset(fixedPixelMap, 0, pictureHeight*pictureLenght* sizeof(uint32_t));
	std::memcpy(picture, tabRGB, pictureHeight*pictureLenght * 3 * sizeof(uint32_t));
};
