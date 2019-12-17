#include "vectormedianfilter.h"

VectorMedianFilter::VectorMedianFilter(const QImage &src, const container &damaged) noexcept
    :baseFilter (src, damaged)
{}

void VectorMedianFilter::Correction()
{
    for(const auto& var : missingPixels)
    {
        real min = std::numeric_limits<real>::max();
        auto square = picture.get_square(picture(var.first));
        dummy_pointer<pixel> min_it;
        for(const auto& tab : square)
            for(auto var = tab.begin(); var != tab.end(); var++)
            {
                real tmp = 0.0;
                for(const auto& x : square)
                    for(const auto& y : x)
                        tmp += var->get_RGB_distance(y);
                if(tmp < min)
                {
                    min = tmp;
                    min_it = const_cast<pixel*>(var);
                }
            }
        picture(var.first) = *(min_it.ptr);
    }
}
