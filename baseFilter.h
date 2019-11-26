#pragma once
#include<vector>
using namespace std;

class baseFilter
{
private:
	vector<double> parameters; //Parametry potrzebne konkretnemu filtrowi
	short** fixedPixelMap = nullptr; //mapa naprawionych pixeli
	//short*** pictureToFix = nullptr; //wskaünik do naprawionego obrazu

public:
	baseFilter();
	~baseFilter() { if (fixedPixelMap != nullptr) delete[] fixedPixelMap; };
	void setParameters(vector<double> iParameters) { parameters = iParameters; };
	vector<double> getParameters() { return parameters; }
	void setFixedPixel(int xPixel, int yPixel) {
		if (fixedPixelMap != nullptr) { fixedPixelMap[xPixel][yPixel] = 1; }
	}; //zaznacza na mapie naprawione pixele
	short** getFixedPixel() {return fixedPixelMap;}; //zwraca wskaünik do mapy z naprawionymi pixelami

	//void takePicture(short ***tabRGB); //pobiera obrazek do naprawy
	//short *** returnFixedPicture(); //zwraca przyjÍty obraz
	virtual void Correction()=0; //miejsce na algorytm naprawiajπcy obraz
};

