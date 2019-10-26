#pragma once

#include <memory>

#include <QPixmap>
#include <QImage>
#include <QPicture>


class Izimage
{
        using chr = short;
        using idx = unsigned int;
        using coord = std::pair<idx, idx>;
        using schr = std::shared_ptr<chr>;

        #define except(msg) try{ throw(std::invalid_argument{msg}); }catch(const std::invalid_argument&){ throw; }
        #define make_schr(x) std::make_shared<chr>(x)


        chr * __m_red = nullptr;
        chr * __m_green = nullptr;
        chr * __m_blue = nullptr;

        const idx __m_width;
        const idx __m_height;

public:

        struct pixel
        {
            pixel(chr _r, chr _g, chr _b) { R(_r); G(_g); B(_b); }
            pixel(const pixel&) = default;
            pixel(pixel&&) = default;
            pixel& operator=(const pixel&) = default;
            pixel& operator=(pixel&&) = default;
            pixel() = delete;
            ~pixel() = default;
            chr R() const { return *r; }
            chr G() const { return *g; }
            chr B() const { return *b; }
            void R(const chr i_r) { if(i_r < 256 && i_r >= 0) *r=i_r; else except("not in range"); }
            void G(const chr i_g) { if(i_g < 256 && i_g >= 0) *g=i_g; else except("not in range"); }
            void B(const chr i_b) { if(i_b < 256 && i_b >= 0) *b=i_b; else except("not in range"); }
            bool operator==(const pixel& src) { return R() == src.R() && G() == src.G() && B() == src.B(); }
            bool operator!=(const pixel& src) { return !this->operator==(src); }
        private:
            schr r = nullptr, g = nullptr, b = nullptr;
            pixel(chr* _r, chr* _g, chr* _b) { r=make_schr(_r); g=make_schr(_g); b=make_schr(_b); _r = nullptr; _g = nullptr; _b = nullptr; }
            pixel(schr _r, schr _g, schr _b) : r{_r}, g{_g}, b{_b} {}
            friend class iterator;
            friend class Izimage;
        };

        using row = std::vector<pixel>;
        using px_square = std::vector<row>;

        struct iterator
        {
            iterator() = delete;
            iterator(const iterator&) = default;
            iterator(iterator&&) = default;

            void operator++(int);
            void operator--(int);
            void operator++() { this->operator++(0); }
            void operator--() { this->operator--(0); }

            pixel operator->() const    { return pixel(act_r, act_g, act_b); }
            pixel operator*() const     { return pixel(act_r, act_g, act_b); }

            bool operator==(const iterator& src) { return src.act_r == act_r && src.act_g == act_g && src.act_b == act_b; }
            bool operator!=(const iterator& src) { return !operator==(src); }

        private:
            schr act_r;
            schr act_g;
            schr act_b;
            explicit iterator(const schr _r, const schr _g, const schr _b) : act_r{_r}, act_g{_g}, act_b{_b} {}
            friend class Izimage;
        };

        Izimage(const Izimage&);
        Izimage(Izimage&&);
        ~Izimage();
        explicit Izimage(const QImage&);
        pixel operator()(const idx x, const idx y) const;

        px_square get_square(const pixel& central) const;

        iterator begin() const { return iterator(make_schr(__m_red), make_schr(__m_green), make_schr(__m_blue)); }
        iterator end() const { return iterator(nullptr, nullptr, nullptr); }

private:
        idx translate(const idx x, const idx y) const;
        idx translate(const coord& xy) const { return translate(xy.first, xy.second); }
        coord translate(const idx) const;
};
