#pragma once

//Own dependencies
#include "izimageobjects.h"

//Qt libraries
#include <QImage>

//STL libraries
#include <memory>

#include <array>


//macros
#define max_range __m_width*__m_height

//constexpresions

/// @brief class that <u>only</u> holds image data
/// and provides accessors, to make image processing easier and faster.
/// This class throws no exception, instead of this returns NULL-like objects
class Izimage
{
public: //fields

    /// @variable - if any pixel point to this, it's treated as null
    const static pixel null_pixel;

    /// @variable - if any coord is equal to this, it's treated as null
    /// it can happens if Izimage::translate() detect, that given vlaues are out of range
    const static coord null_coord;

    /// @variable - if any px_square is equal to this, it's treated as null
    const static px_square null_px_square;

    /// @variable - if any idx is equal to this, it's treated as null
    /// it can happens if Izimage::translate() detect, that given vlaues are out of range
    const static idx null_idx;

    /// @variable - if any idx is equal to this, it's treated as null
    const static izimage_iterator null_iterator;

    /// @variable - if any color_num is equal to this, it's treated as null
    const static color_num null_color;

private: //fields

    /// @variable - holds raw data of all pixels
    /// @attention - order is same as in QImage
    std::unique_ptr<raw_pixel[]> __m_data;

    /// @variable - holds width of image
    size_type __m_width;

    /// @variable - holds height of image
    size_type __m_height;

public: //methodes

    /// @fn - no default / copy / move constructors, at all.
    Izimage() =                                                delete;
    Izimage(const Izimage&) =                                  delete;
    Izimage(Izimage&&) =                                       delete;

    /// @fn - theese constructors, will be used quite often
    explicit Izimage(const QImage&)                           noexcept;
    explicit Izimage(QImage&&)                                noexcept;

    /// @fn - operators, to make life easier
    Izimage& operator=(const QImage&)                         noexcept;
    Izimage& operator=(QImage&&)                              noexcept;

    //operators
    pixel operator()(const QPoint&)                     const noexcept;
    pixel operator()(const coord&)                      const noexcept;
    pixel operator()(const coord_num, const coord_num)  const noexcept;

    //operators equivalent
    pixel get(const QPoint&)                            const noexcept;
    pixel get(const coord&)                             const noexcept;
    pixel get(const coord_num, const coord_num)         const noexcept;

    //square operations
    px_square get_square(const pixel&)                  const noexcept;

    //translation unit
    idx translate(const coord&)                         const noexcept;
    coord translate(const idx)                          const noexcept;
    coord translate(const pixel&)                       const noexcept;

    //iterators
    izimage_iterator begin()                                    const noexcept;
    izimage_iterator end()                                      const noexcept;

    /// @brief this methode renders data, to be in more accessiable class - QImage
    void render(QImage& dst)                            const noexcept;

    //getters
    size_type width()                                   const noexcept;
    size_type height()                                  const noexcept;

private: //methodes


};
