#include "DamageGenerator.h"

damageDistansKind DamageGenerator::kindOfDamage = damageDistansKind::euclidean;

void DamageGenerator::rgbChanger(int***iTabRGB, size_t iSizeX, size_t iSizeY, int xAktual, int yAktual,const DmgMap &iDmgMap)
{
	if (-1 < xAktual && xAktual < iSizeX && -1 < yAktual && yAktual < iSizeX)
	{
		iTabRGB[xAktual][yAktual][0] = 0;
		iTabRGB[xAktual][yAktual][1] = 0;
		iTabRGB[xAktual][yAktual][2] = 0;
		iDmgMap.setDamagePixel(xAktual, yAktual);
	}
}

DamageGenerator::DamageGenerator()
{
}


DamageGenerator::~DamageGenerator()
{
}



void DamageGenerator::makeDamage(int***iTabRGB, size_t iSizeX, size_t iSizeY, size_t iDamageStartNumber, size_t iPixelDamageNumber, const DmgMap &iDmgMap)
{
	if (iTabRGB !=nullptr && iSizeX>0 && iSizeY>0)
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
			case damageDistansKind::euclidean:
				for (size_t pixelNumber = 0; pixelNumber < iPixelDamageNumber; pixelNumber++)
				{
					
					xAktual = xCenter - (int)sqrt(iPixelDamageNumber) / 2 + pixelNumber % (int)sqrt(iPixelDamageNumber);
					yAktual = yCenter - (int)sqrt(iPixelDamageNumber) / 2 + pixelNumber / (int)sqrt(iPixelDamageNumber);
					rgbChanger(iTabRGB, iSizeX, iSizeY, xAktual, yAktual, iDmgMap);
				}
				break;

			case damageDistansKind::manhattan:
				int cityRange = 0;
				size_t a = 5;
				size_t b = 4;
				while (a <= iPixelDamageNumber)
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
							rgbChanger(iTabRGB, iSizeX, iSizeY, xAktual, yAktual, iDmgMap);
							if (++pixelNumber > iPixelDamageNumber)
							{
								break;
							}
						}
						
					}
					if (pixelNumber > iPixelDamageNumber)
					{
						break;
					}
				}
				break;
			}
		}
	}
}
