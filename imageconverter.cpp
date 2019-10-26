#include "imageconverter.h"

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
    :__m_width(src.width()), __m_height(src.height())
{
    const idx max = static_cast<idx>(__m_width * __m_height);
    __m_red = new chr[max + 1];
    __m_green = new chr[max + 1];
    __m_blue = new chr[max + 1];

    for(int i = 0; i < __m_width; i++)
        for(int j = 0; j < __m_height; j++)
        {
            const QColor tmp{src.pixel(i, j)};
            const idx id = translate(i,j);
            __m_red[id] =  static_cast<chr>(tmp.red());
            __m_green[id] =  static_cast<chr>(tmp.green());
            __m_blue[id] =  static_cast<chr>(tmp.blue());
        }
}

Izimage::pixel Izimage::operator()(const Izimage::idx x, const Izimage::idx y) const
{
    return pixel(&(__m_red[translate(x,y)]), &(__m_green[translate(x,y)]), &(__m_blue[translate(x,y)]));
}

Izimage::px_square Izimage::get_square(const Izimage::pixel &central) const
{
    #define nulpix pixel(nullptr, nullptr, nullptr)
    const idx central_position = static_cast<idx>((__m_red - central.r.get()) / sizeof(chr));
    const coord pos = translate(central_position);
    px_square ret;
    ret.reserve(3);
    for(int i = 0; i < 3; i++)
        ret.emplace_back(row());

    //First     =   X left  (0 - 100)   right
    //Second    =   Y up    (0 - 100)   down

    //######## SECTION: 1
    if(pos.first == 0 )
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

Izimage::idx Izimage::translate(const Izimage::idx x, const Izimage::idx y) const
{
    return (x + __m_width) + y;
}
