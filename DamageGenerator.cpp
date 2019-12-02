#include "DamageGenerator.h"
#include <cstdlib>
#include<iostream>
using namespace std;

damageDistansKind DamageGenerator::kindOfDamage = damageDistansKind::euclidean;

DamageGenerator::DamageGenerator()
{
}


DamageGenerator::~DamageGenerator()
{
}



void DamageGenerator::makeDamage(const QImage& src, QImage& dst, size_t iDamageStartNumber, int iPixelDamageNumber)
{
    random_device randomGenerator;
    int xCenter;
    int yCenter;
    int xAktual;
    int yAktual;
    uniform_int_distribution<int> uIntDistX(0, src.width());
    uniform_int_distribution<int> uIntDistY(0, src.height());

    for (size_t i = 0; i < iDamageStartNumber; i++)
    {
        xCenter = uIntDistX(randomGenerator);
        yCenter = uIntDistY(randomGenerator);

        for(int j = -1 * (iPixelDamageNumber); j <= iPixelDamageNumber; j++)
            for(int k = -1 * (iPixelDamageNumber); k <= iPixelDamageNumber; k++)
            {
                xAktual = xCenter + j;
                yAktual = yCenter + k;
                if(xAktual < 0 || yAktual < 0) continue;
                if(xAktual >= src.width() || yAktual >= src.height()) continue;

                dst.setPixel(xAktual, yAktual, Qt::transparent);
            }
    }
}
