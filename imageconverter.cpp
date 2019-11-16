#include "imageconverter.h"
#include <QDebug>

#define cout qDebug()

Izimage::Izimage(const Izimage & src)
    :__m_width{src.__m_width}, __m_height{src.__m_height}
{
    const idx max = static_cast<idx>(__m_width * __m_height);
    __m_red = new chr[max + 1];
    __m_green = new chr[max + 1];
    __m_blue = new chr[max + 1];
    memcpy(__m_red, src.__m_red, (max+1)*sizeof(chr));
    memcpy(__m_green, src.__m_green, (max+1)*sizeof(chr));
    memcpy(__m_blue, src.__m_blue, (max+1)*sizeof(chr));
}

Izimage::Izimage(Izimage && src)
    :__m_width{src.__m_width}, __m_height{src.__m_height}
{
    __m_red = src.__m_red;
    src.__m_red = nullptr;
    __m_green = src.__m_green;
    src.__m_green = nullptr;
    __m_blue = src.__m_blue;
    src.__m_blue = nullptr;
}

Izimage::~Izimage()
{
    if(__m_red != nullptr)
    {
        delete[] __m_red;
        __m_red = nullptr;
    }

    if(__m_green != nullptr)
    {
        delete[] __m_green;
        __m_green = nullptr;
    }

    if(__m_blue != nullptr)
    {
        delete[] __m_blue;
        __m_blue = nullptr;
    }
}

Izimage::Izimage(const QImage & src)
    :__m_width(static_cast<idx>(src.width())), __m_height(static_cast<idx>(src.height()))
{
    const idx max = static_cast<idx>(__m_width * __m_height);
    __m_red = new chr[max + 1];
    __m_green = new chr[max + 1];
    __m_blue = new chr[max + 1];
//    cout << max;
    for(idx i = 0; i < __m_width; i++)
        for(idx j = 0; j < __m_height; j++)
        {
            const QColor tmp{src.pixel(i, j)};
            const idx id = translate(j, i);
//            cout << id << i << j << tmp.red() << tmp.green() << tmp.blue();
            __m_red[id] =  static_cast<chr>(tmp.red());
            __m_green[id] =  static_cast<chr>(tmp.green());
            __m_blue[id] =  static_cast<chr>(tmp.blue());
        }
    __m_red[max] = -1;
    __m_green[max] = -1;
    __m_blue[max] = -1;
}

Izimage::pixel Izimage::operator()(const Izimage::idx x, const Izimage::idx y) const
{
    const idx i = translate(x, y);
//    cout << "translacja:" << i << "na:" << x << y;
    return pixel{ &__m_red[i], &__m_blue[i], &__m_green[i] };
}

Izimage::px_square Izimage::get_square(const Izimage::pixel &central) const
{
    const idx central_position = static_cast<idx>((__m_red - central.r) / sizeof(chr));
    const coord pos = translate(central_position);
    px_square ret;

    //First     =   X left  (0 - 100)   right
    //Second    =   Y up    (0 - 100)   down

    //######## SECTION: 1
    if( pos.first == 0 )
    {
        ret[0].emplace_back(nulpix);
        ret[1].emplace_back(nulpix);
        ret[2].emplace_back(nulpix);
    }
    else ret[1].emplace_back(
                pixel(
                    &(__m_red[translate(pos.first - 1, pos.second)]),
                    &(__m_green[translate(pos.first - 1, pos.second)]),
                    &(__m_blue[translate(pos.first - 1, pos.second)])
            ));
    //Fill central
    ret[1].push_back(central);

    //After section 1
    /*
          0   1   2

     0    ? | \ | \
         -----------
     1    S | S | \
         -----------
     2    ? | \ | \
          ^
     Legend:
         S = Seted - known value (NULL or some val)
         \ = not even touch
         ? = not sure is set or not
         '^' or '->' = column or row, which has been modified
    */

    //######## SECTION: 2
    if(pos.second == 0)
        while(ret[0].size() < 3) ret[0].emplace_back(nulpix);
    else
    {
        if(ret[1][0] != nulpix)
            ret[0].emplace_back(pixel(
                    &(__m_red[translate(pos.first - 1, pos.second - 1)]),
                    &(__m_green[translate(pos.first - 1, pos.second - 1)]),
                    &(__m_blue[translate(pos.first - 1, pos.second - 1)])
                ));
        ret[0].emplace_back(
                pixel(
                    &(__m_red[translate(pos.first, pos.second-1)]),
                    &(__m_green[translate(pos.first, pos.second-1)]),
                    &(__m_blue[translate(pos.first, pos.second-1)])
            ));
    }

    //After section 2
    /*
    ->   S | S | ?
        -----------
         S | S | \
        -----------
         ? | \ | \
    */


    //######## SECTION: 3
    if(pos.first == __m_width - 1)
    {
        while(ret[0].size() < 3) ret[0].emplace_back(nulpix);
        ret[1].emplace_back(nulpix);
    }
    else
    {
        ret[1].emplace_back(pixel(
                                 &(__m_red[translate(pos.first + 1, pos.second)]),
                                 &(__m_green[translate(pos.first + 1, pos.second)]),
                                 &(__m_blue[translate(pos.first + 1, pos.second)])
                         ));
        if(ret[0][1] != nulpix)
            ret[0].emplace_back(pixel(
                                    &(__m_red[translate(pos.first + 1, pos.second - 1)]),
                                    &(__m_green[translate(pos.first + 1, pos.second - 1)]),
                                    &(__m_blue[translate(pos.first + 1, pos.second - 1)])
                            ));

    }

    //After section 3
    /*
         S | S | S
        -----------
         S | S | S
        -----------
         ? | \ | ?
                 ^
    */


    //######## SECTION: 4

    if(ret[2].size() == 0)
    {
        if(pos.second == __m_height - 1)
        {
            ret[2].reserve(3);
            while(ret[2].size() < 3) ret[2].emplace_back(nulpix);
            return ret;
        }
        else
        {
            ret[2].emplace_back(pixel(
                                    &(__m_red[translate(pos.first-1, pos.second + 1)]),
                                    &(__m_green[translate(pos.first-1, pos.second + 1)]),
                                    &(__m_blue[translate(pos.first-1, pos.second + 1)])
                                    ));
        }
    }

    ret[2].emplace_back(pixel(
                            &(__m_red[translate(pos.first, pos.second + 1)]),
                            &(__m_green[translate(pos.first, pos.second + 1)]),
                            &(__m_blue[translate(pos.first, pos.second + 1)])
                            ));
    ret[2].emplace_back(pixel(
                            &(__m_red[translate(pos.first+1, pos.second + 1)]),
                            &(__m_green[translate(pos.first+1, pos.second + 1)]),
                            &(__m_blue[translate(pos.first+1, pos.second + 1)])
                            ));

    //After section 4
    /*
         S | S | S
        -----------
         S | S | S
        -----------
    ->   S | S | S

    */

}

QImage Izimage::render() const
{
#define cout qDebug()
    QImage ret(__m_width, __m_height, QImage::Format_RGB888);
    for(idx j = 0; j < __m_height; j++)
        for(idx i = 0; i < __m_width; i++)
        {
//            cout << i << j << ret.width() << ret.height() << __m_red[translate(j, i)] << __m_green[translate(j, i)] << __m_blue[translate(j, i)];
            ret.setPixelColor(i, j, QColor(
                            __m_red[translate(j, i)],
                            __m_green[translate(j, i)],
                            __m_blue[translate(j, i)]
                                  ));
        }
    return ret;
}

Izimage::idx Izimage::translate(const Izimage::idx x, const Izimage::idx y) const
{
    return (x * __m_width) + y;
}

Izimage::idx Izimage::translate(const Izimage::coord &xy) const
{
    return (xy.first * __m_width) + xy.second;
}

Izimage::coord Izimage::translate(const Izimage::idx i) const
{
    const size_t row = i / __m_width;
    return coord{row, i - (row * __m_width)};
}

void Izimage::iterator::operator++(int) noexcept
{
    if(this->operator*() == nulpix) return;
    this->act_r++;
    this->act_g++;
    this->act_b++;
}

bool Izimage::pixel::operator==(const Izimage::pixel &src) const
{
    if(src.r == nullptr || r == nullptr)
        return r == src.r;
    else
        return R() == src.R() && G() == src.G() && B() == src.B();
}

Izimage::pixel::operator QString() const
{
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
//    cout << "Konwersja: " << ret.c_str();
    return QString(ret.c_str());
}

void Izimage::iterator::operator--(int)
{
    this->act_r--;
    this->act_g--;
    this->act_b--;
}

Izimage::px_square::operator QString() const
{
    //TODO
    return "";
}
