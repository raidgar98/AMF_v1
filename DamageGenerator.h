#pragma once
#include<random>
#include"DmgMap.h"


enum damageKind
{
	square,
	diamond,
	circle,
	cloud,
	snow,
	fog
};

class DamageGenerator
{
private:
	static void rgbChanger(int xAktual, int yAktual, int xChange, int yChange);
	static void rgbDamage(int xAktual, int yAktual);
	static void drawCircle(int xCenter, int yCenter);
	static damageKind kindOfDamage;
	static int*** tabRGB;
	static size_t sizeX;
	static size_t sizeY;
	static DmgMap* dmgMap;
	static size_t pixelDamageNumber;

public:
    DamageGenerator();
    ~DamageGenerator();

    static void makeDamage(int***iTabRGB, size_t iSizeX, size_t iSizeY, size_t iDamageCenterNumber, size_t iPixelDamageNumber, DmgMap  &iDmgMap);
	static void setKindOfDamage(damageKind iKindOfDamage) { kindOfDamage = iKindOfDamage; }
};

