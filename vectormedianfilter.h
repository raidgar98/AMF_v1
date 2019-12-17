#pragma once

#include "baseFilter.h"

class VectorMedianFilter : public baseFilter
{
public:
    /// @brief no default constructor. That's nonsense
    VectorMedianFilter() = delete;

    /// @brief only constructor
    /// @param src - damaged image
    /// @param damaged - collection of damaged pixels
    VectorMedianFilter(QImage const & src, const container& damaged) noexcept;

    /// @brief implementation of Average Filter algorythm
    virtual void Correction() override;

};
