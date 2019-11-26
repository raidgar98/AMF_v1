#pragma once
#include<random>
#include<ctime>
#include<math.h>
//#include"damageKind.h"
using namespace std;

enum damageDistansKind
{
    euclidean,
    manhattan
};

class DamageGenerator
{
private:
    static void rgbChanger(int*iTabR, int*iTabG, int*iTabB, size_t iSizeX, size_t iSizeY, int xAktual, int yAktual);

protected:
    static damageDistansKind kindOfDamage;

public:
    DamageGenerator();
    ~DamageGenerator();

    static void makeDamage(int*iTabR, int*iTabG, int*iTabB, size_t iSizeX, size_t iSizeY, size_t iDamageCenterNumber, size_t iPixelDamageNumber);
    static void setKindOfDamage(damageDistansKind iKindOfDamage) { kindOfDamage = iKindOfDamage; }
};


