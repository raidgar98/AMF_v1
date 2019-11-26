#ifndef FILTER_AVERAGE_H
#define FILTER_AVERAGE_H
#include <QImage>
#include <QColor>
#include <QPixelFormat>
#include "global_settings.h"

class filter_average
{
    QImage *fixed_img;
    QImage *copy;
    int ***arr;
    QColor color;
    void addRGB(QRgb rgb, int x);
    int R,G,B,i;


public:
    filter_average(QImage src);
    ~filter_average();
    QImage fix();

};

#endif // FILTER_AVERAGE_H
