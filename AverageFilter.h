#pragma once

//Qt libraries
#include <QImage>

//STL libraries

//Own dependencies
#include "baseFilter.h"

/// @brief Implementation of simple Average filter. In damaged pixel inserts average of neighbours
class AverageFilter
        : public baseFilter
{
public:

    /// @brief no default constructor. That's nonsense
    AverageFilter() = delete;

    /// @brief only constructor
    /// @param src - damaged image
    /// @param damaged - collection of damaged pixels
    AverageFilter(QImage const & src, const container& damaged) noexcept;

    /// @brief this methode retrives picture, from depths
    /// @param output param, to avoid unecessary copying.
    void getFixedPicture(QImage& pic) const noexcept;

    /// @brief implementation of Average Filter algorythm
    virtual void Correction() override;

};
