#include "DamageGenerator.h"
#include <cstdlib>
#include<iostream>
using namespace std;

damageDistansKind DamageGenerator::kindOfDamage = damageDistansKind::euclidean;

void DamageGenerator::rgbChanger(int*iTabR, int*iTabG, int*iTabB, size_t iSizeX, size_t iSizeY, int xAktual, int yAktual)
{
	if (-1 < xAktual && xAktual < iSizeX && -1 < yAktual && yAktual < iSizeX)
	{
		*(iTabR+yAktual*iSizeX+xAktual) = 0;
		*(iTabG + yAktual * iSizeX + xAktual) = 0;
		*(iTabB + yAktual * iSizeX + xAktual) = 0;
	}
}

DamageGenerator::DamageGenerator()
{
}


DamageGenerator::~DamageGenerator()
{
}



void DamageGenerator::makeDamage(int*iTabR, int*iTabG, int*iTabB, size_t iSizeX, size_t iSizeY, size_t iDamageStartNumber, size_t iPixelDamageNumber)
{
	if (iTabR!=nullptr && iTabG != nullptr && iTabB != nullptr && iSizeX>0 && iSizeY>0)
	{	
		random_device randomGenerator;
		int xCenter;
		int yCenter;
		int xAktual;
		int yAktual;
		uniform_int_distribution<int> uIntDistX(0, iSizeX);
		uniform_int_distribution<int> uIntDistY(0, iSizeY);

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
					cout << xAktual << "\t" << yAktual << endl;
					rgbChanger(iTabR, iTabG, iTabB, iSizeX, iSizeY, xAktual, yAktual);
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
							cout << xAktual << "\t" << yAktual << endl;
							rgbChanger(iTabR, iTabG, iTabB, iSizeX, iSizeY, xAktual, yAktual);
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
