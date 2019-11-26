#pragma once
#include<random>
#include"DmgMap.h"


enum damageDistansKind
{
	euclidean,
	manhattan
};

class DamageGenerator
{
private:
	static void rgbChanger(int***iTabRGB, size_t iSizeX, size_t iSizeY, int xAktual, int yAktual, DmgMap &iDmgMap);

protected:
	static damageDistansKind kindOfDamage;
	
public:
    DamageGenerator();
    ~DamageGenerator();

    static void makeDamage(int***iTabRGB, size_t iSizeX, size_t iSizeY, size_t iDamageCenterNumber, size_t iPixelDamageNumber, DmgMap  &iDmgMap);
	static void setKindOfDamage(damageDistansKind iKindOfDamage) { kindOfDamage = iKindOfDamage; }
};

