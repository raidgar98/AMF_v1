#pragma once

#include <memory>

#include <QPixmap>
#include <QImage>
#include <QPicture>


class Izimage
{
public:


        using chr = unsigned char;
        using idx = unsigned int;
        using coord = std::pair<idx, idx>;
        using schr = std::shared_ptr<chr>;

        #define except(msg) try{ throw(std::invalid_argument{msg}); }catch(const std::invalid_argument&){ throw; }
        #define make_schr(x) std::make_shared<chr>(x)
        #define nulpix pixel()
        #define to_struct(X) reinterpret_cast<

        chr * __m_data = nullptr;

        idx __m_width;
        idx __m_height;

public:

        struct pixel//czemu nie osobna klasa?
        {
            pixel(const chr i_r, const chr i_g, const chr i_b, const chr i_a)
            {
                R(i_r);
                G(i_g);
                B(i_b);
                A(i_a);
            }
            pixel(const pixel&) = default;
            pixel(pixel&&) = default;
            pixel& operator=(const pixel& src)      { R(src.R()); G(src.G()); B(src.B()); return *this; }
            pixel& operator=(pixel&& src)           { R(src.R()); G(src.G()); B(src.B()); return *this; }
            //in this case pixell is nullpix (full opacity)
            ~pixel() { d_ptr = nullptr; }

            //If u get nullValueExcepttion, or noObjectFoundException or smth like this with memory, u probably try to read freom Izimage::end(). blame on you
            chr R() const { return get_ptr(d_ptr)->r; }
            chr G() const { return get_ptr(d_ptr)->g; }
            chr B() const { return get_ptr(d_ptr)->b; }
            chr A() const { return get_ptr(d_ptr)->a; }

            void R(const chr i_r) { get_ptr(d_ptr)->r = i_r; }
            void G(const chr i_g) { get_ptr(d_ptr)->g = i_g; }
            void B(const chr i_b) { get_ptr(d_ptr)->b = i_b; }
            void A(const chr i_a) { get_ptr(d_ptr)->a = i_a; }

            bool operator==(const pixel& src) const;
            bool operator!=(const pixel& src) const { return !this->operator==(src); }
            operator QString() const noexcept;
            operator bool() const { return !isNull(); }

            void operator=(const QRgb&);

            bool isNull() const { return d_ptr == nullptr; }

        private:

            void * d_ptr = nullptr;

            pixel() { d_ptr = nullptr; }
            pixel(void* ptr)
                :d_ptr{ ptr }
            {}

            // Same order as in QImage::bits(), which is required during reinterpret_cast
            // DO NOT TOUCH
            struct cast_struct { chr b; chr g; chr r; chr a; };
            cast_struct* get_ptr( void* ptr ) const { return reinterpret_cast<cast_struct*>(ptr); }

            friend class iterator;
            friend class Izimage;//zawiera sie juz?
        };

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
            ~iterator() { act_pos = nullptr; }

            void operator++(int) noexcept;
            void operator--(int);
            void operator++() noexcept { this->operator++(0); }
            void operator--() { this->operator--(0); }

            pixel operator->() const    { return pixel(act_pos); }
            pixel operator*() const     { return pixel(act_pos); }

            bool operator==(const iterator& src) { return act_pos == src.act_pos; }
            bool operator!=(const iterator& src) { return !operator==(src); }

        private:

            chr * act_pos;
            iterator(chr * _d) : act_pos{_d} { _d = nullptr; }
            friend class Izimage;
        };

        Izimage(const Izimage&);
        Izimage(Izimage&&);
        ~Izimage();
        explicit Izimage(const QImage&);
        Izimage& operator=(const QImage&);

        pixel operator()(const idx x, const idx y) const;

        px_square get_square(const pixel& central) const { return px_square(); }

        iterator begin() const { return iterator(__m_data); }
        iterator end() const { const idx max = __m_width * __m_height; return iterator(&__m_data[max * sizeof(pixel::cast_struct)]); }

        idx width()     const noexcept  { return __m_width; }
        idx height()    const noexcept  { return __m_height; }

        void render(QImage& dst) const;

        bool isNull() const noexcept { return __m_data == nullptr; }

        idx translate(const idx x, const idx y) const;
        idx translate(const coord& xy) const;
        coord translate(const idx) const;

        static chr null_val;
};



