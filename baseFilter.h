#pragma once
#include<vector>
using namespace std;

class baseFilter
{
protected:
	//parametry potrzebne konkretnemu filtrowi trzeba dopisa� w klasach dziedzicz�cych
	uint32_t ** fixedPixelMap = nullptr; //mapa naprawionych pixeli
	short*** picture = nullptr; //wska�nik do obrazu
	//wymiary obrazka
	uint32_t pictureHeight=0;
	uint32_t pictureLenght=0;

public:
	baseFilter();
	baseFilter(short ***tabRGB, uint32_t iHeight, uint32_t iLenght);
	~baseFilter();
	virtual void setParameters(vector<double> iParameters) =0;//ustawianie parametr�w jest za pomoc� wektora, w klasach pochodnych trzeba zdefiniowa�, kt�ra z jego sk�adowych b�dzie wype�nia�a dany parametr
	//w klasach pochodnych trzeba doda� gettery do dodanych parametr�w
	void setFixedPixel(int xPixel, int yPixel) ; //zaznacza na mapie naprawione pixele
	uint32_t** getFixedPixel() const {return fixedPixelMap;}; //zwraca wska�nik do mapy z naprawionymi pixelami

	void takePicture(short ***tabRGB, uint32_t iHeight, uint32_t iLenght);  //pobiera obrazek do naprawy
	short *** returnFixedPicture() const { return picture; }; //zwraca przyj�ty obraz
	virtual void Correction()=0; //miejsce na algorytm naprawiaj�cy obraz
};

