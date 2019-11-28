#pragma once
#include<vector>
using namespace std;

class baseFilter
{
protected:
    //parametry potrzebne konkretnemu filtrowi trzeba dopisać w klasach dziedziczących
    uint32_t ** fixedPixelMap = nullptr; //mapa naprawionych pixeli
    short*** picture = nullptr; //wskaźnik do obrazu
    //wymiary obrazka
    uint32_t pictureHeight=0;
    uint32_t pictureLeght=0;

public:
    baseFilter();
    ~baseFilter();
    virtual void setParameters(vector<double> iParameters) =0;//ustawianie parametrów jest za pomocą wektora, w klasach pochodnych trzeba zdefiniować, która z jego składowych będzie wypełniała dany parametr
    //w klasach pochodnych trzeba dodać gettery do dodanych parametrów
    void setFixedPixel(int xPixel, int yPixel) ; //zaznacza na mapie naprawione pixele
    uint32_t** getFixedPixel() const {return fixedPixelMap;} //zwraca wskaźnik do mapy z naprawionymi pixelami

    void takePicture(short ***tabRGB, uint32_t iHeight, uint32_t iLenght);  //pobiera obrazek do naprawy
    short *** returnFixedPicture() const { return picture; } //zwraca przyjęty obraz
    virtual void Correction()=0; //miejsce na algorytm naprawiający obraz
};
