#pragma once
#include<vector>
using namespace std;

class baseFilter
{
private:
	//parametry potrzebne konkretnemu filtrowi trzeba dopisaæ w klasach dziedzicz¹cych
	uint32_t ** fixedPixelMap = nullptr; //mapa naprawionych pixeli
	short*** picture = nullptr; //wskaŸnik do obrazu
	//wymiary obrazka
	uint32_t pictureHeight=0;
	uint32_t pictureLeght=0;

public:
	baseFilter();
	~baseFilter();
	virtual void setParameters(vector<double> iParameters) =0;//ustawianie parametrów jest za pomoc¹ wektora, w klasach pochodnych trzeba zdefiniowaæ, która z jego sk³adowych bêdzie wype³nia³a dany parametr
	//w klasach pochodnych trzeba dodaæ gettery do dodanych parametrów
	void setFixedPixel(int xPixel, int yPixel) ; //zaznacza na mapie naprawione pixele
	uint32_t** getFixedPixel() const {return fixedPixelMap;}; //zwraca wskaŸnik do mapy z naprawionymi pixelami

	void takePicture(short ***tabRGB, uint32_t iHeight, uint32_t iLenght);  //pobiera obrazek do naprawy
	short *** returnFixedPicture() const { return picture; }; //zwraca przyjêty obraz
	virtual void Correction()=0; //miejsce na algorytm naprawiaj¹cy obraz
};

