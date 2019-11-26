#include "imageconverter.h"
#include <QDebug>
//#include "/home/raidg/Qt/5.12.4/Src/qtbase/src/gui/image/qimage_p.h"
#include <QtCore>

using namespace QtPrivate;

#define cout qDebug()

Izimage::Izimage(const Izimage & src)
    :__m_width{src.__m_width}, __m_height{src.__m_height}
{
    const idx max = static_cast<idx>(__m_width * __m_height);
    __m_data = new chr[max + 1];
    memcpy(__m_data, src.__m_data, (max+1)*sizeof(pixel::cast_struct));
}

Izimage::Izimage(Izimage && src)
    :__m_width{src.__m_width}, __m_height{src.__m_height}
{
    __m_data = src.__m_data;
    src.__m_data = nullptr;
}

Izimage::~Izimage()
{
    if(__m_data != nullptr)
    {
        delete[] __m_data;
        __m_data = nullptr;
    }
}

Izimage::Izimage(const QImage & src)
    :__m_width(static_cast<idx>(src.width())), __m_height(static_cast<idx>(src.height()))
{
    const idx max = static_cast<idx>(__m_width * __m_height);
    __m_data = new chr[((max + 1) * sizeof(pixel::cast_struct))];
    memcpy(
                reinterpret_cast<void*>(__m_data),
                reinterpret_cast<const void*>(src.bits()),
                max * sizeof(pixel::cast_struct)
            );

    //Create delimiter
    for(chr * it = &__m_data[max * sizeof(pixel::cast_struct)]; ;it++)
    {
        *it = 0;
        if(it == &__m_data[((max + 1) * sizeof(pixel::cast_struct)) - 1]) break;
    }
}

Izimage::pixel Izimage::operator()(const Izimage::idx x, const Izimage::idx y) const
{
    const idx i = translate(x, y);
    return pixel{ &__m_data[i] };
}

void Izimage::render(QImage& dst) const
{
    dst = QImage(__m_width, __m_height, QImage::Format::Format_RGBA8888);
    dst.fill(Qt::black);
    uchar * ptr = const_cast<uchar*>(dst.bits());
    memcpy(reinterpret_cast<void*>(ptr),  reinterpret_cast<const void*>(__m_data), __m_width * __m_height * sizeof(pixel::cast_struct));
    ptr = nullptr;
}

Izimage::idx Izimage::translate(const Izimage::idx x, const Izimage::idx y) const
{
    return ((x * __m_height) + y) * sizeof(pixel::cast_struct);
}

Izimage::idx Izimage::translate(const Izimage::coord &xy) const
{
    return (xy.first * __m_height) + xy.second;
}

Izimage::coord Izimage::translate(const Izimage::idx i) const
{
    const size_t row = ( i / __m_height) / sizeof(pixel::cast_struct);
    return coord{row, i - (row * __m_height)};
}

void Izimage::iterator::operator++(int) noexcept
{
    if(this->operator*() == nulpix) return;
    this->act_pos += sizeof(pixel::cast_struct);
}

bool Izimage::pixel::operator==(const Izimage::pixel &src) const
{
    if(src.d_ptr == nullptr || d_ptr == nullptr )
        return src.d_ptr == d_ptr;
    else
        return R() == src.R() && G() == src.G() && B() == src.B();
}

Izimage::pixel::operator QString() const noexcept
{
    if(d_ptr == nullptr) return "NULL";
    std::string ret{"RGB("};
    std::wstring    __r{std::to_wstring(int(R()))},
                    __g{std::to_wstring(int(G()))},
                    __b{std::to_wstring(int(B()))};

    for(const wchar_t var : __r)
        ret += static_cast<char>(var);
    ret += ", ";
    for(const wchar_t var : __g)
        ret += static_cast<char>(var);
    ret += ", ";
    for(const wchar_t var : __b)
        ret += static_cast<char>(var);
    ret += ")\0";

    return QString(ret.c_str());
}

void Izimage::iterator::operator--(int)
{
    //If it fails, it fails like a boss.
    //Expect 'Segmentation Fault' or 'Access Violation' round here
    this->act_pos -= sizeof(pixel::cast_struct);
}

Izimage::px_square::operator QString() const
{
    QStringList vec;
    for(const auto& var : data)
    {
        QStringList tmp;
        for(const auto& tar : var)
            tmp << tar;
        vec << tmp.join("|");
    }
    return vec.join("\n");
}
