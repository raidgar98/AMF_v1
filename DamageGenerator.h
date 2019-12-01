#pragma once
#include<random>
#include<ctime>
#include<math.h>
#include <QImage>
//#include"damageKind.h"
using namespace std;

enum damageDistansKind
{
    euclidean,
    manhattan
};

class DamageGenerator
{
protected:
    static damageDistansKind kindOfDamage;

public:
    DamageGenerator();
    ~DamageGenerator();

    static void makeDamage(const QImage& src, QImage& dst, size_t iDamageStartNumber, int iPixelDamageNumber);
    static void setKindOfDamage(damageDistansKind iKindOfDamage) { kindOfDamage = iKindOfDamage; }
};


