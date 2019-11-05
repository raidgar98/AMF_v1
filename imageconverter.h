#pragma once

#include <memory>

#include <QPixmap>
#include <QImage>
#include <QPicture>


class Izimage
{
public:
        using chr = short;
        using idx = unsigned int;
        using coord = std::pair<idx, idx>;
        using schr = std::shared_ptr<chr>;

        #define except(msg) try{ throw(std::invalid_argument{msg}); }catch(const std::invalid_argument&){ throw; }
        #define make_schr(x) std::make_shared<chr>(x)
        #define nulpix pixel(nullptr, nullptr, nullptr)

        chr * __m_red = nullptr;
        chr * __m_green = nullptr;
        chr * __m_blue = nullptr;

        const idx __m_width;
        const idx __m_height;

public:

        struct pixel
        {
//            pixel(chr _r, chr _g, chr _b) { R(_r); G(_g); B(_b); }
            pixel(const pixel&) = default;
            pixel(pixel&&) = default;
            pixel& operator=(const pixel& src)      { R(src.R()); G(src.G()); B(src.B()); }
            pixel& operator=(pixel&& src)           { R(src.R()); G(src.G()); B(src.B()); }
            pixel() = delete;
            ~pixel(){ r = nullptr; g = nullptr; b = nullptr; }
            chr R() const { return r != nullptr ? *r : -1; }
            chr G() const { return g != nullptr ? *g : -1; }
            chr B() const { return b != nullptr ? *b : -1; }
            void R(const chr i_r) { if(r != nullptr && i_r < 256 && i_r >= 0) (*r)=i_r; }
            void G(const chr i_g) { if(g != nullptr && i_g < 256 && i_g >= 0) (*g)=i_g; }
            void B(const chr i_b) { if(b != nullptr && i_b < 256 && i_b >= 0) (*b)=i_b; }
            bool operator==(const pixel& src) const;
            bool operator!=(const pixel& src) const { return !this->operator==(src); }
            operator QString() const;
        private:
            chr * r = nullptr, * g = nullptr, * b = nullptr;
            pixel(chr* _r, chr* _g, chr* _b) { r=(_r); g=(_g); b=(_b); _r = nullptr; _g = nullptr; _b = nullptr; }
            friend class iterator;
            friend class Izimage;
        };

//        using row = std::vector<pixel>;
//        using px_square = std::vector<row>;
        class px_square
        {
            std::vector<std::vector<pixel>> data;
        public:
            px_square() { data.reserve(3); for(int i = 0; i < 3; i++) data.push_back(std::vector<pixel>()); for(auto& var : data) var.reserve(3); }
            std::vector<pixel>& operator[](const idx id) { return data[id]; }
            operator QString() const;
        };

        struct iterator
        {
            iterator() = delete;
            iterator(const iterator&) = default;
            iterator(iterator&&) = default;
            ~iterator() { act_r = nullptr; act_g = nullptr; act_b = nullptr; }

            void operator++(int) noexcept;
            void operator--(int);
            void operator++() noexcept { this->operator++(0); }
            void operator--() { this->operator--(0); }

            pixel operator->() const    { return pixel(act_r, act_g, act_b); }
            pixel operator*() const     { return pixel(act_r, act_g, act_b); }

            bool operator==(const iterator& src) { return src.act_r == act_r && src.act_g == act_g && src.act_b == act_b; }
            bool operator!=(const iterator& src) { return !operator==(src); }

        private:
            chr * act_r;
            chr * act_g;
            chr * act_b;
            iterator(chr * _r, chr * _g, chr * _b) : act_r{_r}, act_g{_g}, act_b{_b} { _r = nullptr; _g = nullptr; _b = nullptr; }
            friend class Izimage;
        };

        Izimage(const Izimage&);
        Izimage(Izimage&&);
        ~Izimage();
        explicit Izimage(const QImage&);
        pixel operator()(const idx x, const idx y) const;

        px_square get_square(const pixel& central) const;

        iterator begin() const { return iterator(__m_red, __m_green, __m_blue); }
        iterator end() const { const idx max = __m_width * __m_height; return iterator(&__m_red[max], &__m_green[max], &__m_blue[max]); }

        idx width()     const noexcept  { return __m_width; }
        idx height()    const noexcept  { return __m_height; }

        QImage render() const;

//private:
        idx translate(const idx x, const idx y) const;
        idx translate(const coord& xy) const;
        coord translate(const idx) const;
};

