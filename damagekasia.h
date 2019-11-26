#ifndef DAMAGEKASIA_H
#define DAMAGEKASIA_H
#include <QImage>
#include "global_settings.h"

class DamageKasia
{
    QImage copy;
    int ***arr;
    QColor color;
public:
    DamageKasia(QImage src);
    QImage spoil(int size, int num);
    ~DamageKasia();
};

#endif // DAMAGEKASIA_H
