#include "izimageobjects.h"
#include "izimage.h"


bool pixel_representation::isNull() const noexcept
{
    return ( __m_data.ptr == Izimage::null_pixel.__m_data.ptr ) || ( __m_data.ptr->a == Izimage::null_color );
}

color_num pixel_representation::R() const noexcept
{
    if( isNull() ) return Izimage::null_color;
    return __m_data.ptr->r;
}

color_num pixel_representation::G() const noexcept
{
    if( isNull() ) return Izimage::null_color;
    return __m_data.ptr->g;
}

color_num pixel_representation::B() const noexcept
{
    if( isNull() ) return Izimage::null_color;
    return __m_data.ptr->b;
}

color_num pixel_representation::A() const noexcept
{
    if( isNull() ) return Izimage::null_color;
    return __m_data.ptr->a;
}

void pixel_representation::R(const color_num color) noexcept
{
    if( isNull() ) return;
    __m_data.ptr->r = color;
}

void pixel_representation::G(const color_num color) noexcept
{
    if( isNull() ) return;
    __m_data.ptr->g = color;
}

void pixel_representation::B(const color_num color) noexcept
{
    if( isNull() ) return;
    __m_data.ptr->b = color;
}

void pixel_representation::A(const color_num color) noexcept
{
    if( isNull() ) return;
    __m_data.ptr->a = color;
}

void pixel_representation::R(const RGB color) noexcept
{
    if( isNull() ) return;
    __m_data.ptr->r = qRed(color);
}

void pixel_representation::G(const RGB color) noexcept
{
    if( isNull() ) return;
    __m_data.ptr->g = qGreen(color);
}

void pixel_representation::B(const RGB color) noexcept
{
    if( isNull() ) return;
    __m_data.ptr->b = qRed(color);
}

void pixel_representation::A(const RGB color) noexcept
{
    if( isNull() ) return;
    __m_data.ptr->b = qAlpha(color);
}

void pixel_representation::operator=(const RGB color) noexcept
{
    R(color);
    G(color);
    B(color);
    A(color);
}

pixel_representation::operator QString() const noexcept
{
    return "RGBA(" + QString::number(R()) + ", " + QString::number(G()) + ", " + QString::number(B()) + ", " + QString::number(A()) + ")";
}

bool pixel_representation::operator==(const pixel_representation & src) const noexcept
{
    if( isNull() || src.isNull() ) return ( src.__m_data.ptr == __m_data.ptr );
    return ( R() == src.R() ) && ( G() == src.G() ) && ( B() == src.B() );
}

bool pixel_representation::operator!=(const pixel_representation & src) const noexcept
{
    return !(this->operator==(src));
}

pixel_representation::pixel_representation(const pixel_representation & src) noexcept
    :__m_data{ src.__m_data }
{}

pixel_representation::pixel_representation(pixel_representation && src) noexcept
    :__m_data{ src.__m_data }
{}

pixel_representation::pixel_representation(raw_pixel * ptr) noexcept
{
    __m_data = dummy_pointer<raw_pixel>();
    __m_data.ptr = ptr;
}

point_representation::point_representation(coord_num x, coord_num y) noexcept
    :__m_x{x}, __m_y{y}
{}

point_representation::point_representation(const QPoint & src) noexcept
    :__m_x( src.x() ), __m_y( src.y() )
{}

point_representation::point_representation(QPoint && src) noexcept
    :__m_x( src.x() ), __m_y( src.y() )
{}

bool point_representation::isNull() const noexcept
{
    return this->operator==(Izimage::null_coord);
}

bool point_representation::operator==(const point_representation & src) const noexcept
{
    return ( x() == src.x() ) && ( y() == src.y() );
}

bool point_representation::operator!=(const point_representation & src) const noexcept
{
    return !(this->operator==(src));
}

coord_num point_representation::x() const noexcept
{
    return __m_x;
}

coord_num point_representation::y() const noexcept
{
    return __m_y;
}

void point_representation::x(const coord_num _x) noexcept
{
    __m_x = _x;
}

void point_representation::y(const coord_num _y) noexcept
{
    __m_y = _y;
}

point_representation::operator QPoint() const noexcept
{
    return QPoint( x(), y() );
}

RGB px_square::medium() const noexcept
{
    double med_r{0.0}, med_g{0.0}, med_b{0.0};
    for(const auto& tab : data)
        for(const auto& var : tab)
            if(!var.isNull())
            {
                med_r = ( med_r + var.R() ) / 2.0;
                med_g = ( med_g + var.G() ) / 2.0;
                med_b = ( med_b + var.B() ) / 2.0;
            }
    return qRGB(med_r, med_g, med_b, 255);
}

bool px_square::isNull() const noexcept
{
    //If one is not null, this object is not null
    for(const auto& tab : data)
        for(const auto& var : tab)
            if(!var.isNull()) return false;
    return true;
}

px_square::px_square(const Izimage * parent, const pixel & px) noexcept
    :data{ { { Izimage::null_pixel, Izimage::null_pixel, Izimage::null_pixel }, { Izimage::null_pixel, Izimage::null_pixel, Izimage::null_pixel }, { Izimage::null_pixel, Izimage::null_pixel, Izimage::null_pixel } } }
{
    if( parent == nullptr && (false || px.isNull()) ) return;
    const coord central = parent->translate(px);
    if(central == Izimage::null_coord) return;
    for(int i = -1; i <= 1; i++)
        for(int j = -1; j <= 1; j++)
            data[i][j] = parent->get(central.x() + i, central.y() + j);
}

pixel izimage_iterator::operator*() const noexcept
{
    if(isNull()) return Izimage::null_pixel;
    return pixel(d_ptr.ptr);
}

pixel izimage_iterator::operator->() const noexcept
{
    if(isNull()) return Izimage::null_pixel;
    return pixel(d_ptr.ptr);
}

void izimage_iterator::operator++() noexcept
{
    if( isNull() ) return;
    d_ptr.ptr++;
}

bool izimage_iterator::operator==(const izimage_iterator & src) const noexcept
{
    if(!isNull())
    {
        if(d_ptr.ptr->a == 0 && src.isNull()) return true;
    }
    return  ( d_ptr.ptr == src.d_ptr.ptr );
}

bool izimage_iterator::operator!=(const izimage_iterator & src) const noexcept
{
    return !(this->operator==(src));
}

bool izimage_iterator::isNull() const noexcept
{
    return d_ptr.ptr == Izimage::null_iterator.d_ptr.ptr;
}

izimage_iterator::izimage_iterator(raw_pixel * ptr) noexcept
{
    d_ptr = dummy_pointer<raw_pixel>();
    d_ptr.ptr = ptr;
}
