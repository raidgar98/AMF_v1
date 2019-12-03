#include "izimage.h"
#include <QDebug>

const pixel Izimage::null_pixel{ nullptr };
const coord Izimage::null_coord{ max_coord_number, max_coord_number };
const px_square Izimage::null_px_square{ nullptr, null_pixel };
const idx Izimage::null_idx{ max_idx };
const izimage_iterator Izimage::null_iterator{ nullptr };
const color_num Izimage::null_color{ 0 };

#define cout qDebug()

Izimage::Izimage(const QImage & src) noexcept
{
    this->operator=(src);
}

Izimage::Izimage(QImage && src) noexcept
{
    this->operator=(src);
}

Izimage &Izimage::operator=(const QImage & src) noexcept
{
    __m_height = src.height();
    __m_width = src.width();

    __m_data.reset( new raw[max_range + 1] );
    memcpy(__m_data.get(), src.bits(), max_range * sizeof(raw));
    __m_data[max_range] = { 0, 0, 0, 0 };
    return *this;
}

#pragma message("redundant code here :(")
Izimage &Izimage::operator=(QImage && src) noexcept
{
    __m_height = src.height();
    __m_width = src.width();

    __m_data.reset( new raw[max_range + 1] );
    memcpy(__m_data.get(), src.bits(), max_range * sizeof(raw));
    __m_data[max_range] = { 0, 0, 0, 0 };
    return *this;
}

pixel Izimage::operator()(const QPoint & point) const noexcept
{
    return get(point.x(), point.y());
}

pixel Izimage::operator()(const coord & point) const noexcept
{
    return get(point.x(), point.y());
}

pixel Izimage::operator()(const coord_num x, const coord_num y) const noexcept
{
    return get(x, y);
}

pixel Izimage::get(const QPoint & point) const noexcept
{
    if( __m_width - point.x() <= 0 || __m_height - point.y() <= 0) return null_pixel;
    return get(point.x(), point.y());
}

pixel Izimage::get(const coord & point) const noexcept
{
    if( point.isNull() || point.x() > __m_width || point.y() > __m_height ) return null_pixel;
    return get(point.x(), point.y());
}

pixel Izimage::get(const coord_num x, const coord_num y) const noexcept
{
    if( x > __m_width || y > __m_height ) return null_pixel;
    return pixel(__m_data.get() + translate({x, y}));
}

px_square Izimage::get_square(const pixel & px) const noexcept
{
    if(px.isNull()) return null_px_square;
    return px_square(this, px);
}

idx Izimage::translate(const coord & point) const noexcept
{
    if( point.isNull() || point.x() > width() || point.y() > height() ) return null_idx;
    return ( point.y() * height() ) + point.x();
}

coord Izimage::translate(const idx index) const noexcept
{
    if( index >= max_range ) return null_coord;
    const idx row = index / height();
    return { row, index - (row * height()) };
}

coord Izimage::translate(const pixel & px) const noexcept
{
    if(px.isNull()) return null_coord;
    return translate( px.__m_data.ptr - __m_data.get() );
}

izimage_iterator Izimage::begin() const noexcept
{
    return izimage_iterator(__m_data.get());
}

izimage_iterator Izimage::end() const noexcept
{
    return izimage_iterator(&(__m_data[max_range])) ;
//    return null_iterator;
}

void Izimage::render(QImage &dst) const noexcept
{
    dst = QImage( width(), height(), default_format);
    dst.fill(qRgba(255,255,255,255));
    const uchar * tmp = dst.bits();
    memcpy( const_cast<uchar*>(tmp), __m_data.get(), max_range * sizeof(raw_pixel) );
}

size_type Izimage::width() const noexcept
{
    return __m_width;
}

size_type Izimage::height() const noexcept
{
    return __m_height;
}
