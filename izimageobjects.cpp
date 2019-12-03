#include "izimageobjects.h"
#include "izimage.h"

bool pixel_representation::isNull() const noexcept
{
    return ( __m_data.ptr == Izimage::null_pixel.__m_data.ptr );
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
    R(static_cast<color_num>(qRed(color)));
}

void pixel_representation::G(const RGB color) noexcept
{
    if( isNull() ) return;
    G(static_cast<color_num>(qGreen(color)));
}

void pixel_representation::B(const RGB color) noexcept
{
    if( isNull() ) return;
    B(static_cast<color_num>(qBlue(color)));
}

void pixel_representation::A(const RGB color) noexcept
{
    if( isNull() ) return;
    A(static_cast<color_num>(qAlpha(color)));
}

void pixel_representation::operator=(const RGB color) noexcept
{
    set(color);
}

pixel_representation &pixel_representation::operator=(pixel_representation && px) noexcept
{
    R(px.R());
    G(px.G());
    B(px.B());
    A(px.A());
    return *this;
}

void pixel_representation::operator()(const pixel_representation & src) noexcept
{
    __m_data.ptr = src.__m_data.ptr;
}

void pixel_representation::operator()(pixel_representation && src) noexcept
{
    __m_data.ptr = src.__m_data.ptr;
}

void pixel_representation::set(const RGB color) noexcept
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

pixel_representation &pixel_representation::operator=(const pixel_representation & px) noexcept
{
    R(px.R());
    G(px.G());
    B(px.B());
    A(px.A());
    return *this;
}

pixel_representation::pixel_representation(raw_pixel * ptr) noexcept
{
    __m_data = dummy_pointer<raw_pixel>();
    if(ptr == nullptr)
        __m_data.ptr = new raw_pixel{0, 0, 0, 0};
    else
        __m_data.ptr = ptr;
}

point_representation::point_representation(coord_num x, coord_num y) noexcept
    :__m_x{x}, __m_y{y}
{}

point_representation::point_representation(const QPoint & src) noexcept
    :__m_x( static_cast<size_t>(src.x()) ), __m_y( static_cast<size_t>(src.y()) )
{}

point_representation::point_representation(QPoint && src) noexcept
    :__m_x( static_cast<size_t>(src.x()) ), __m_y( static_cast<size_t>(src.y()) )
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

bool point_representation::operator<(const point_representation & src) const noexcept
{
    return (src.x() == x() ? y() < src.y() : x() < src.x());
}

bool operator<(const point_representation& src1, const point_representation& src2)
{
    return  (src1.x() == src2.x() ? src1.y() < src2.y() : src1.x() < src2.x());
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

point_representation::operator QString() const noexcept
{
    return "coord(" + QString::number(__m_x) + ", " + QString::number(__m_y) + ")";
}

point_representation::operator QPoint() const noexcept
{
    return QPoint( static_cast<int>(x()), static_cast<int>(y()) );
}

RGB px_square::average() const noexcept
{
    double med_r{0.0}, med_g{0.0}, med_b{0.0};
    bool flag = false;
    for(const auto& tab : data)
    {
        for(const auto& var : tab)
            if(!var.isNull() && var.A() > 0)
            {
                med_r = var.R();
                med_g = var.G();
                med_b = var.B();
                flag = true;
                break;
            }
        if(flag) break;
    }

    for(const auto& tab : data)
        for(const auto& var : tab)
            if(!var.isNull() && var.A() > 0)
            {
                med_r = ( med_r + var.R() ) / 2.0;
                med_g = ( med_g + var.G() ) / 2.0;
                med_b = ( med_b + var.B() ) / 2.0;
            }
    return qRGB(static_cast<int>(med_r), static_cast<int>(med_g), static_cast<int>(med_b), 255);
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
    const coord central = parent->translate(px);
    if(central == Izimage::null_coord) return;
    for(size_t i = 0; i < square_size; i++)
        for(size_t j = 0; j < square_size; j++)
        {
            pixel ppx{parent->get(central.x() + ( i - 1 ), central.y() + ( j - 1 ))};
            data[j][i](ppx);
        }
}

pixel izimage_iterator::operator*() const noexcept
{
    if(isNull()) return Izimage::null_pixel;
    return (*parent.ptr)(parent.ptr->translate(current_index));
}

pixel izimage_iterator::operator->() const noexcept
{
    if(isNull()) return Izimage::null_pixel;
    return (*parent.ptr)(parent.ptr->translate(current_index));
}

void izimage_iterator::operator++() noexcept
{
    if( isNull() ) return;
    current_index++;
}

void izimage_iterator::operator++(int) noexcept
{
    this->operator++();
}

bool izimage_iterator::operator==(const izimage_iterator & src) const noexcept
{
    return current_index == src.current_index;
}

bool izimage_iterator::operator!=(const izimage_iterator & src) const noexcept
{   
    return !(this->operator==(src));
}

bool izimage_iterator::isNull() const noexcept
{
    return current_index >= (parent.ptr->width() * parent.ptr->height());
}

izimage_iterator::izimage_iterator(const Izimage* _p, const idx index) noexcept
    :parent(_p), current_index{ index }
{}
