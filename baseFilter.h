#pragma once

#include<vector>
#include "imageconverter.h"

using namespace std;

template<typename T>
using array_pointer_member = std::shared_ptr<T[]>;

template<typename T>
using array_pointer = std::shared_ptr<array_pointer_member<T>[]>;

/// @brief klasa bazowa dla przyszłych filtrów
/// @note w klasach pochodnych trzeba dodać gettery do dodanych parametrów
/// @note parametry potrzebne konkretnemu filtrowi trzeba dopisać w klasach dziedziczących
class baseFilter
{
protected:

    /// @variable mapa naprawionych pixeli
    /// @note później wymagana zmiana na tablice rzadką
    array_pointer<bool> fixedPixelMap;

    /// @variable kontener zniszczonego obrazu
    Izimage picture;

public:

    /// @brief wirtualny destruktor
    explicit baseFilter(const QImage& src);
    virtual ~baseFilter() = default;

    /// @brief ustawianie parametrów jest za pomocą wektora, w klasach pochodnych trzeba zdefiniować, która z jego składowych będzie wypełniała dany parametr
    /// @param iParameters - zadane parametry
    virtual void setParameters(const vector<double>& iParameters) = 0;

    /// @brief zaznacza na mapie naprawione pixele
    /// @param xPixel, yPixel - współżędne
    void setFixedPixel(const size_t xPixel, const size_t yPixel, const bool state);

    /// @brief zwraca wskaźnik do mapy z naprawionymi pixelami
    /// @returns wskaźnik na tablicę naprawionych pikseli
    const array_pointer<bool>& getFixedPixel() const { return fixedPixelMap; }

    /// @brief pobiera obrazek do naprawy
    /// @param tabRGB - wskaźnik na tablicę pixeli (RGB)
    /// @param iHeight, iLength - wymiary obrazka
    void takePicture(const QImage& src);

    /// @brief zwraca przyjęty obraz
    /// @returns wskaźnik na obraz
    const Izimage& returnFixedPicture() const { return picture; }

    /// @brief miejsce na algorytm naprawiający obraz
    virtual void Correction() = 0;
};
