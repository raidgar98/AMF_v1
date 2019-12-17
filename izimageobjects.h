#pragma once

//Qt libraries
#include <QImage>

//STL libraries
#include <array>

//Own dependencies
#include "utility.h"

//usings
using RGB = QRgb;

//macros
#define qRGB( r, g, b, a) qRgba(r, g, b, a)

//constexpresions
constexpr QImage::Format default_format = QImage::Format::Format_RGBA8888;
constexpr size_type square_size = 3;
constexpr coord_num max_coord_number = std::numeric_limits<coord_num>::max();
constexpr idx max_idx = std::numeric_limits<idx>::max();


//predefines
class Izimage;

/// @brief at the end life of this object, it's release pointer, to prevent deletion
/// all in all, this whole struct is about destructor
template<typename T>
struct dummy_pointer
{
    /// @variable - holds data
    T* ptr = nullptr;

    /// @brief - defaults....
    dummy_pointer() noexcept {}
    dummy_pointer(T* src) noexcept : ptr{src} {}
    dummy_pointer(const dummy_pointer&) =                                      default;
    dummy_pointer(dummy_pointer&&) =                                           default;
    void operator=(T* src) noexcept { ptr = src; }

    dummy_pointer& operator=(const dummy_pointer&) =                           default;
    dummy_pointer& operator=(dummy_pointer&&) =                                default;

    ~dummy_pointer() { ptr = nullptr; } // <- most important round here
};

/// @brief don't even look at this struct. It MUST looks like this. i dare you, DON'T TOUCH THIS
struct raw_pixel
{
    /// @variable Stands for RGBA values
    color_num r;
    color_num g;
    color_num b;
    color_num a;
};
using raw = raw_pixel;

/// @brief represents single pixel, and provide accessors to modify it
struct pixel_representation
{
    /// @brief it's good to check is everything ok
    bool isNull()                                                       const noexcept;

    /// @getters / setters...
    color_num R()                                                       const noexcept;
    color_num G()                                                       const noexcept;
    color_num B()                                                       const noexcept;
    color_num A()                                                       const noexcept;

    void R(const color_num)                                                   noexcept;
    void G(const color_num)                                                   noexcept;
    void B(const color_num)                                                   noexcept;
    void A(const color_num)                                                   noexcept;

    void R(const RGB)                                                         noexcept;
    void G(const RGB)                                                         noexcept;
    void B(const RGB)                                                         noexcept;
    void A(const RGB)                                                         noexcept;

    /// @brief operator that makes life easier
    void operator=(const RGB)                                                 noexcept;
    void set(const RGB)                                                       noexcept;

    /// @brief compare operators (compares RGBA values)
    bool operator==(const pixel_representation&)                        const noexcept;
    bool operator!=(const pixel_representation&)                        const noexcept;

    /// @brief Theese copy/move constructors just assign pointer, they don't touch RGBA values
    pixel_representation() =                                                    delete;
    ~pixel_representation() =                                                  default;
    pixel_representation(const pixel_representation&)                         noexcept;
    pixel_representation(pixel_representation&&)                              noexcept;

    /// @brief Theese two operators assign values
    pixel_representation& operator=(const pixel_representation&)              noexcept;
    pixel_representation& operator=(pixel_representation&&)                   noexcept;

    /// @brief Theese two operators, are assigment operator, but for member pointer
    void operator()(const pixel_representation&)                              noexcept;
    void operator()(pixel_representation&&)                                   noexcept;

    /// @brief defined for Debug purpose
    operator QString()                                                  const noexcept;

    /// @brief counts distance in 3-dimensional (RGB) space between pixels
    real get_RGB_distance(const pixel_representation& px)               const noexcept;

private:

    /// @variable holds pointer to single structer in parent Izimage
    dummy_pointer<raw_pixel> __m_data;

    /// @brief - private constructor
    explicit pixel_representation(raw_pixel*)                                 noexcept;

    friend class Izimage;
    friend struct izimage_iterator;
    friend struct px_square;
};
using pixel = pixel_representation;

/// @brief represents coordinates - alternative to QPoint ( even with conversion to it )
struct point_representation
{
    /// @brief default constructors, no way that somethin goes wrong round here
    point_representation() =                                                   default;
    point_representation(point_representation&&) =                             default;
    point_representation(const point_representation&) =                        default;
    point_representation(coord_num x, coord_num y)                            noexcept;
    explicit point_representation(const QPoint&)                              noexcept;
    explicit point_representation(QPoint&&)                                   noexcept;

    /// @brief same here, assigment operators
    point_representation& operator=(point_representation&&) =                  default;
    point_representation& operator=(const point_representation&) =             default;

    /// @brief compare methodes and operators (less, to use std::set)
    bool isNull()                                                       const noexcept;
    bool operator==(const point_representation&)                        const noexcept;
    bool operator!=(const point_representation&)                        const noexcept;
    bool operator<(const point_representation&)                         const noexcept;

    /// @brief getters / setters
    coord_num x()                                                       const noexcept;
    coord_num y()                                                       const noexcept;

    void x(const coord_num)                                                   noexcept;
    void y(const coord_num)                                                   noexcept;


    /// @brief Theese two makes life easier in debugging and assigns
    operator QPoint()                                                   const noexcept;
    operator QString()                                                  const noexcept;

private:

    /// @variable coordinates, which defines this structure
    coord_num __m_x = 0, __m_y = 0;

};
using coord = point_representation;

/// @brief represents square, 9-pixel, part of image
struct px_square
{
    using array_it = decltype(((std::array<std::array<pixel, square_size>, square_size>*)nullptr)->end());

    /// @brief Theese constructors guarantee, that only Izimage can create 'fresh' object
    px_square(const px_square&) =                                              default;
    px_square(px_square&&) =                                                   default;
    px_square& operator=(const px_square&) =                                   default;
    px_square& operator=(px_square&&) =                                        default;

    /// @brief This methode calculates RGB average of pixels, inside 'data' var. Null or '0 opacity' ones are skipped
    RGB average()                                                        const noexcept;

    /// @brief This methode checks is there at least one not null pixel
    bool isNull()                                                        const noexcept;

    /// @brief Iterator proxy methodes
    array_it begin()                                                           noexcept;
    array_it end()                                                             noexcept;


private:

    /// @variable storage of processed pixels
    std::array<std::array<pixel, square_size>, square_size> data;

    /// @brief constructor for Izimage::get_px_square
    px_square(const Izimage*, const pixel&)                                   noexcept;
    friend class Izimage;
};

/// @brief standard izimage_iterator, that goes for every row, down the picture
struct izimage_iterator
{
    /// @brief standard assigment operators and constructors for standard iterator
    izimage_iterator() =                                                                        delete;
    ~izimage_iterator() =                                                                      default;
    izimage_iterator(const izimage_iterator&) =                                                default;
    izimage_iterator(izimage_iterator&&) =                                                     default;
    izimage_iterator& operator=(const izimage_iterator&) =                                     default;
    izimage_iterator& operator=(izimage_iterator&&) =                                          default;

    /// @brief dereferrence operators
    pixel operator*()                                                                   const noexcept;
    pixel operator->()                                                                  const noexcept;
    void operator++()                                                                         noexcept;
    void operator++(int)                                                                      noexcept;

    /// @brief compare operators and methode
    bool operator==(const izimage_iterator&)                                            const noexcept;
    bool operator!=(const izimage_iterator&)                                            const noexcept;
    bool isNull()                                                                       const noexcept;

private:

    /// @variable Pointer to parent storage. Not pretty, but not buggy also
    dummy_pointer<const Izimage> parent;

    /// @variable Index in inner parent array
    idx current_index;

    /// @brief Only Izimage::begin and Izimage::end can create 'fresh' iterator
    explicit izimage_iterator(const Izimage*, const idx index)                                      noexcept;

    friend class Izimage;

};
