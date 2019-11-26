#include "filter_average.h"
#include <random>
#include <ctime>
#include <QRgb>
#include "DmgMap.h"
using namespace std;
filter_average::filter_average(QImage src)
{
    copy = &src;
    fixed_img=&src;


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

filter_average::~filter_average()
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
    if (fixed_img!=nullptr) fixed_img=nullptr;
    if(copy!=nullptr) copy=nullptr;

}

void filter_average::addRGB(QRgb rgb, int x)
{
    i+=x;
    R+=x*qRed(rgb);
    G+=x*qGreen(rgb);
    B+=x*qBlue(rgb);

}

QImage filter_average::fix() //ramki!
{

    QColor black(0,0,0);
    bool loop;
    do
    {
        loop=true;
        for(int x=1;x<fixed_img->width()-1;x++)
        {
            for (int y=2;y<fixed_img->height()-1;y++)
            {
                if(black==copy->pixelColor(x,y))
                {
                    loop=false;
                    if(black!=copy->pixelColor(x-1,y)||black!=copy->pixelColor(x+1,y)||black!=copy->pixelColor(x,y-1)||black!=copy->pixelColor(x,y+1))
                    {
                       R=0;
                       G=0;
                       B=0;
                       i=0;
                        if(black!=copy->pixelColor(x-1,y))
                        {
                            QRgb rgb(copy->pixel(x-1,y));
                           addRGB(rgb,2);
                        }
                        if(black!=copy->pixelColor(x+1,y))
                        {
                            QRgb rgb(copy->pixel(x+1,y));
                            addRGB(rgb,2);
                        }
                        if(black!=copy->pixelColor(x,y-1))
                        {
                            QRgb rgb(copy->pixel(x,y-1));
                           addRGB(rgb,2);
                        }
                        if(black!=copy->pixelColor(x,y+1))
                        {
                            QRgb rgb(copy->pixel(x,y+1));
                            addRGB(rgb,2);
                        }
                        if(black!=copy->pixelColor(x-1,y-1))
                        {
                            QRgb rgb(copy->pixel(x-1,y-1));
                           addRGB(rgb,1);
                        }
                        if(black!=copy->pixelColor(x-1,y+1))
                        {
                            QRgb rgb(copy->pixel(x-1,y+1));
                           addRGB(rgb,1);
                        }
                        if(black!=copy->pixelColor(x+1,y-1))
                        {
                            QRgb rgb(copy->pixel(x+1,y-1));
                           addRGB(rgb,1);
                        }
                        if(black!=copy->pixelColor(x+1,y+1))
                        {
                           QRgb rgb(copy->pixel(x+1,y+1));
                           addRGB(rgb,1);
                        }
                        R/=i;
                        G/=i;
                        B/=i;
                        color.setRgb(R,G,B);

                        fixed_img->setPixelColor(x,y,color);

                    }
                }
            }
        }
    }while(!loop);




    /*for(int x=0;x<fixed_img->width();x++)
   {
       for (int y=0;y<fixed_img->height();y++)
       {
        color.setRgb(arr[0][x][y],arr[1][x][y],arr[2][x][y]);
        fixed_img->setPixelColor(x,y,color);
       }
    }*/

    return *fixed_img;
}
