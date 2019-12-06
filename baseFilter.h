#pragma once

//Qt libraries

//STL libraries
#include <map>

//Own dependencies
#include "izimage.h"

/// @note will be replaced to Patrick's RareMatrix
/// @param coord: coordination
/// @param bool: if set true it's restored, otherwise missing
using container = std::map<coord, bool>;

/// @brief base class for further filters
class baseFilter
{
protected:

    /// @variable Stores restored pixels
    container restoredPixels;

    /// @variable Stores missing pixels
    /// @note why not squash with above, hmmm?
    container missingPixels;

    /// @variable Picture here, will be repaired
    Izimage picture;

public:

    /// @brief only avaiable constructor
    /// @param src: destroyed image, this image will be repaired
    /// @param damaged: key-value container, that stores missing pixels
    explicit baseFilter(const QImage& src, const container& damaged) noexcept;

    /// @brief virtual destructor
    virtual ~baseFilter() = default;

    /// @brief sets,
    /// @param xPixel, yPixel - współżędne
    void setFixedPixel(const coord& position, const bool state = true) noexcept;

    /// @brief return const reference to fixed pixels container, simole getter
    const container& getRestoredPixel() const { return restoredPixels; }

    /// @brief returns const reference to picture
    const Izimage& returnPicture() const { return picture; }

    /// @brief in this methode derrived classes defines their repairment algorythm
    virtual void Correction() = 0;
};
