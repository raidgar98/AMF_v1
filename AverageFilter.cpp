#include "AverageFilter.h"
#include "utility.h"

AverageFilter::AverageFilter(std::vector<coord> const &i_dmpmap, QImage const & src)
    :baseFilter (src), broken_points{i_dmpmap}
{}

void AverageFilter::setParameters(const std::vector<double> & iParameters)
{
//    if( ( iParameters.size() == 1 && iParameters.at(0) == 1.0) || iParameters.at(0) == 0.0 )
    //        m_Param = iParameters.at(0);
}

void AverageFilter::getFixedPicture(QImage& pic) const
{
    picture.render(pic);
}

void AverageFilter::Correction()
{
    for(const auto& var : broken_points)
        picture(var) = picture.get_square(picture(var)).average();
}
