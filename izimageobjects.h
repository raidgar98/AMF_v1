#pragma once

//Qt libraries
#include <QImage>

//STL libraries

//Own dependencies

//usings
using RGB = QRgb;
using size_type = size_t;
using coord_num = unsigned long long int;
using idx = coord_num;
using color_num = unsigned char;

//macros
#define qRGB( r, g, b) qRgb(r, g, b)

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

    /// @fn - defaults....
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
    color_num b;
    color_num g;
    color_num r;
    color_num a;
};
using raw = raw_pixel;

/// @brief represents single pixel, and provide accessors to modify it
struct pixel_representation
{
    /// @brief it's good to check is everything ok
    bool isNull()                                                       const noexcept;

    color_num R()                                                       const noexcept;
    color_num G()                                                       const noexcept;
    color_num B()                                                       const noexcept;

    void R(const color_num)                                                   noexcept;
    void G(const color_num)                                                   noexcept;
    void B(const color_num)                                                   noexcept;

    void R(const RGB)                                                         noexcept;
    void G(const RGB)                                                         noexcept;
    void B(const RGB)                                                         noexcept;

    void operator=(const RGB)                                                 noexcept;

    bool operator==(const pixel_representation&)                        const noexcept;
    bool operator!=(const pixel_representation&)                        const noexcept;

    pixel_representation() =                                                    delete;
    ~pixel_representation() =                                                  default;
    pixel_representation(const pixel_representation&)                         noexcept;
    pixel_representation(pixel_representation&&)                              noexcept;

    pixel_representation& operator=(const pixel_representation&) =             default;
    pixel_representation& operator=(pixel_representation&&) =                  default;

private:

    /// @variable holds pointer to single structer in parent Izimage
    dummy_pointer<raw_pixel> __m_data;

    /// @fn - private constructor
    explicit pixel_representation(raw_pixel*)                                 noexcept;

    friend class Izimage;
    friend struct izimage_iterator;
};
using pixel = pixel_representation;

/// @brief represents coordinates - alternative to QPoint ( even with conversion to it )
struct point_representation
{
    point_representation() =                                                   default;
    point_representation(point_representation&&) =                             default;
    point_representation(const point_representation&) =                        default;
    point_representation(coord_num x, coord_num y)                            noexcept;
    explicit point_representation(const QPoint&)                              noexcept;
    explicit point_representation(QPoint&&)                                   noexcept;

    point_representation& operator=(point_representation&&) =                  default;
    point_representation& operator=(const point_representation&) =             default;

    bool isNull()                                                       const noexcept;
    bool operator==(const point_representation&)                        const noexcept;
    bool operator!=(const point_representation&)                        const noexcept;

    coord_num x()                                                       const noexcept;
    coord_num y()                                                       const noexcept;

    void x(const coord_num)                                                   noexcept;
    void y(const coord_num)                                                   noexcept;

    operator QPoint()                                                   const noexcept;

private:

    coord_num __m_x = 0, __m_y = 0;

};
using coord = point_representation;

/// @brief represents square, 9-pixel, part of image
struct px_square
{
//    px_square()                                                               noexcept;
    px_square(const px_square&) =                                              default;
    px_square(px_square&&) =                                                   default;
    px_square& operator=(const px_square&) =                                   default;
    px_square& operator=(px_square&&) =                                        default;

    RGB medium()                                                        const noexcept;
    bool isNull()                                                       const noexcept;

private:

    std::array<std::array<pixel, square_size>, square_size> data;

    px_square(const Izimage*, const pixel&)                                   noexcept;
    friend class Izimage;
};

/// @brief standard izimage_iterator, that goes for every row, down the picture
struct izimage_iterator
{

    izimage_iterator() =                                                                delete;
    ~izimage_iterator() =                                                              default;
    izimage_iterator(const izimage_iterator&) =                                                default;
    izimage_iterator(izimage_iterator&&) =                                                     default;
    izimage_iterator& operator=(const izimage_iterator&) =                                     default;
    izimage_iterator& operator=(izimage_iterator&&) =                                          default;

    pixel operator*()                                                   const noexcept;
    pixel operator->()                                                  const noexcept;
    void operator++()                                                         noexcept;

    bool operator==(const izimage_iterator&)                                    const noexcept;
    bool operator!=(const izimage_iterator&)                                    const noexcept;
    bool isNull()                                                       const noexcept;

private:

    dummy_pointer<raw_pixel> d_ptr;

    explicit izimage_iterator(raw_pixel*)                                             noexcept;

    friend class Izimage;

};
