#include "damagekasia.h"

#include "filter_average.h"
#include <random>
#include <ctime>
#include <QRgb>

using namespace std;
DamageKasia::DamageKasia(QImage src)
{
    copy = src;
   /* //alokacja tablic
    arr=new int**[3];
    for(int i=0;i<3;i++)
    {
        arr[i]=new int*[src->width()];
        for(int x=0;x<src->width();x++)
            arr[i][x]=new int [src->height()];
    }


    //wypelnienie tablic
    for(int x=0;x<src->width();x++)
    {
        for (int y=0;y<src->height();y++)
        {
            arr[0][x][y]=qRed(src->pixel(x,y));
            arr[1][x][y]=qRed(src->pixel(x,y));
            arr[2][x][y]=qRed(src->pixel(x,y));
        }
    }*/
}

DamageKasia::~DamageKasia()
{

    /*if (arr!=nullptr)
   {
       for (int y=0;y<fixed_img->height();y++)
       {
           for(int x=0;x=fixed_img->width();x++)
                delete[] arr[y][x];
           delete[] arr[y];
       }
       delete[] arr;
       arr=nullptr;
   }*/


}
 QImage DamageKasia::spoil(int size, int num)
 {
    color.setRgb(0,0,0);
    random_device seedGenerator;
    mt19937 randomNumGenerator;
    auto entr = seedGenerator.entropy();
    if (entr > 0)
    randomNumGenerator.seed(seedGenerator());
    else
    randomNumGenerator.seed(time(0));

    uniform_int_distribution<int> x_dist(1, copy.width()-size);
    uniform_int_distribution<int> y_dist(1, copy.height()-size);


    for(int i=0;i<num;i++)
    {
        int xx=x_dist(randomNumGenerator);
        int yy=y_dist(randomNumGenerator);
        for(int x=xx;x<xx+size;x++)
        {
            for(int y=yy;y<yy+size;y++)
                copy.setPixelColor(x,y,color);
        }
    }


     return copy;
 }

