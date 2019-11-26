#pragma once
#include<vector>
using namespace std;

class baseFilter
{
private:
	vector<double> parameters; //Parametry potrzebne konkretnemu filtrowi
	short** fixedPixelMap = nullptr; //mapa naprawionych pixeli
	//short*** pictureToFix = nullptr; //wska�nik do naprawionego obrazu

public:
	baseFilter();
	~baseFilter() { if (fixedPixelMap != nullptr) delete[] fixedPixelMap; };
	void setParameters(vector<double> iParameters) { parameters = iParameters; };
	vector<double> getParameters() { return parameters; }
	void setFixedPixel(int xPixel, int yPixel) {
		if (fixedPixelMap != nullptr) { fixedPixelMap[xPixel][yPixel] = 1; }
	}; //zaznacza na mapie naprawione pixele
	short** getFixedPixel() {return fixedPixelMap;}; //zwraca wska�nik do mapy z naprawionymi pixelami

	//void takePicture(short ***tabRGB); //pobiera obrazek do naprawy
	//short *** returnFixedPicture(); //zwraca przyj�ty obraz
	virtual void Correction()=0; //miejsce na algorytm naprawiaj�cy obraz
};

