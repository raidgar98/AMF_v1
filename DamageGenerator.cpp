#include "DamageGenerator.h"
#define M_PI       3.14159265358979323846

damageKind DamageGenerator::kindOfDamage = damageKind::square;
int*** DamageGenerator::tabRGB = nullptr;
size_t DamageGenerator::sizeX = 0;
size_t DamageGenerator::sizeY = 0;
DmgMap* DamageGenerator::dmgMap = nullptr;
size_t DamageGenerator::pixelDamageNumber = 0;

void DamageGenerator::rgbDamage(int xAktual, int yAktual)
{
	if (-1 < xAktual && xAktual < sizeX && -1 < yAktual && yAktual < sizeX)
	{
		tabRGB[xAktual][yAktual][0] = 0;
		tabRGB[xAktual][yAktual][1] = 0;
		tabRGB[xAktual][yAktual][2] = 0;
		dmgMap->setDamagedPixel(xAktual, yAktual);
	}
}

void DamageGenerator::rgbChanger(int xAktual, int yAktual,
								int xChange = 0,int yChange = 0)
{
	switch (kindOfDamage)
	{
	default:
	case damageKind::square:
	case damageKind::diamond:
	{
		rgbDamage( xAktual, yAktual);
	}
	break;
	case damageKind::circle:
	case damageKind::fog:
	case damageKind::cloud:
	{
		rgbDamage( xAktual + xChange, yAktual + yChange);
		rgbDamage( xAktual - xChange, yAktual + yChange);
		rgbDamage( xAktual - xChange, yAktual - yChange);
		rgbDamage( xAktual + xChange, yAktual - yChange);
		rgbDamage( xAktual + yChange, yAktual + xChange);
		rgbDamage( xAktual - yChange, yAktual + xChange);
		rgbDamage( xAktual - yChange, yAktual - xChange);
		rgbDamage( xAktual + yChange, yAktual - xChange);
	}
	break;
	case damageKind::snow:
	{
		rgbDamage( xAktual + xChange, yAktual + xChange);
		rgbDamage( xAktual - xChange, yAktual + xChange);
		rgbDamage( xAktual - xChange, yAktual - xChange);
		rgbDamage( xAktual + xChange, yAktual - xChange);
		rgbDamage( xAktual, yAktual + xChange);
		rgbDamage( xAktual, yAktual - xChange);
		rgbDamage( xAktual - xChange, yAktual);
		rgbDamage( xAktual + xChange, yAktual);
	}
	break;
	}
}

void DamageGenerator::drawCircle(int xCenter, int yCenter)
{
	int radius = pow(pixelDamageNumber / M_PI, 0.5)+1;
	if (kindOfDamage==damageKind::cloud)
	{
		radius /= 1.5;
	}
	else if (kindOfDamage == damageKind::fog)
	{
		radius /= 1.2;
	}
	double norma = 2;

	for (size_t i = 0; i < radius; i++)
	{
		for (size_t j = i; j < radius; j+=1+(kindOfDamage == damageKind::fog))
		{
			std::cout << j << "\n";
			if (pow(i, norma) + pow(j, norma)<pow(radius, norma))
			{
				rgbChanger(xCenter, yCenter, i, j);
			}
		}
	}
}


DamageGenerator::DamageGenerator()
{
}


DamageGenerator::~DamageGenerator()
{
}



void DamageGenerator::makeDamage(int***iTabRGB, size_t iSizeX, size_t iSizeY, 
	size_t iDamageStartNumber, size_t iPixelDamageNumber, DmgMap &iDmgMap)
{
	tabRGB = iTabRGB;
	sizeX = iSizeX;
	sizeY = iSizeY;
	dmgMap = &iDmgMap;
	pixelDamageNumber = iPixelDamageNumber;

	if (iTabRGB != nullptr && iSizeX>0 && iSizeY>0)
	{
		std::random_device randomGenerator;
		int xCenter;
		int yCenter;
		int xAktual;
		int yAktual;
		std::uniform_int_distribution<int> uIntDistX(0, iSizeX);
		std::uniform_int_distribution<int> uIntDistY(0, iSizeY);

		for (size_t i = 0; i < iDamageStartNumber; i++)
		{
			xCenter = uIntDistX(randomGenerator);
			yCenter = uIntDistY(randomGenerator);
			switch (kindOfDamage)
			{
			default:
			case damageKind::square:
			{
				for (size_t pixelNumber = 0; pixelNumber < pixelDamageNumber; pixelNumber++)
				{
					xAktual = xCenter - (int)sqrt(pixelDamageNumber) /
						2 + pixelNumber % (int)sqrt(pixelDamageNumber);
					yAktual = yCenter - (int)sqrt(pixelDamageNumber) /
						2 + pixelNumber / (int)sqrt(pixelDamageNumber);
					rgbChanger(xAktual, yAktual);
				}
				break;
			}
			case damageKind::diamond:
			{
				int cityRange = 0;
				size_t a = 5;
				size_t b = 4;
				while (a <= pixelDamageNumber)
				{
					cityRange++;
					b += 4;
					a += b;
				}
				size_t pixelNumber = 0;
				for (int i = -cityRange; i <= cityRange; i++)
				{
					for (int j = -cityRange; j <= cityRange; j++)
					{
						if (abs(i) + abs(j) <= cityRange)
						{
							xAktual = xCenter + i;
							yAktual = yCenter + j;
							rgbChanger(xAktual, yAktual);
							if (++pixelNumber > pixelDamageNumber)
							{
								break;
							}
						}
					}
					if (pixelNumber > pixelDamageNumber)
					{
						break;
					}
				}
				break;
			}
			case damageKind::circle:
			{
				drawCircle(xCenter, yCenter);
			}
			break;
			case damageKind::fog:
			case damageKind::cloud:
			{
				int numberOfCircleInCloud = 5;
				int xTemp;
				int yTemp;
				int cloudRange = pow(pixelDamageNumber / M_PI, 0.5) + 1;;
				std::uniform_int_distribution<int> 
					uIntDistCloud(-cloudRange / 2, cloudRange / 2);
				for (size_t i = 0; i < numberOfCircleInCloud; i++)
				{
					xTemp = uIntDistCloud(randomGenerator);
					yTemp = uIntDistCloud(randomGenerator);
					drawCircle(xCenter + xTemp, yCenter + 2 * yTemp);
				}
			}
			break;
			case damageKind::snow:
			{
				int radius = pixelDamageNumber/8 + 1;
				double norma = 2;
				for (size_t i = 0; i<radius; i++)
				{
					rgbChanger(xCenter, yCenter, i);
				}
			}
			break;
			}
		}
	}
}
