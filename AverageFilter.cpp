#include "AverageFilter.h"
#include "utility.cpp"

AverageFilter::AverageFilter(std::set<coord> const &i_dmpmap, QImage const & src)
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

//    do{
//        wasDmged=false;
//        for(int row = 1; row < height + 1; row++)
//            for(int col = 1; col < width + 1; col++)
//                if(mask[row][col] == false)
//                {
//                    wasDmged = true;
//                    int sumR = 0;
//                    int sumG = 0;
//                    int sumB = 0;

//                    for(int i = -1;i<=1;i++)
//                        for(int j = -1;j<=1;j++)
//                        {
//                            pixel colorPixO = picture(row+i,col+j);
//                            sumR += colorPixO.R() * mask[row+i][col+j];
//                            sumG += colorPixO.G() * mask[row+i][col+j];
//                            sumB += colorPixO.B() * mask[row+i][col+j];
//                        }
//                    picture(col, row) = qRgb(sumR/NUM_PIX, sumG/NUM_PIX, sumB/NUM_PIX);
//                    setFixedPixel(col, row, true);
//                }
//    }while( wasDmged );

//    for(pixel var : picture)
//    {
//        const coord tmp1 = picture.translate(var);
//        const auto res = broken_points.find( tmp1 );
//        const coord tmp3 = *res;
//        if( res == broken_points.end() ) continue;
////        var.set(picture.get_square(var).average());
//        px_square tmp2 = picture.get_square(var);
//        var = tmp2.average();
//    }

    for(const auto& var : broken_points)
    {
        log({ QString(picture.translate(picture.translate(var))) });
        picture(var) = picture(12,0); //picture.get_square(picture(var)).average();
    }

//    for(int i = 0; i < picture.width(); i++)
//    {
//        picture(i,0) = qRgba(0, 0, 0, 255);
//        picture(i,picture.height() - 1) = qRgba(0, 0, 0, 255);
//        picture(i, (picture.height() - 1) / 2) = qRgba(0, 0, 0, 255);
//        picture((picture.height() - 1) / 2, i) = qRgba(0, 0, 0, 255);
//    }

//    for( auto it = picture.begin(); it != picture.end(); ++it)
//    {
//        QStringList st;
//        for(size_t j = 0; j < picture.height() && it != picture.end(); j++, ++it)
//        {
//            st << picture.translate(picture(picture.translate(*it))) + " " + (*it);
//        }
//    }
}
