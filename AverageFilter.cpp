#include "AverageFilter.h"

AverageFilter::AverageFilter(QQueue<QPoint> const &i_dmpmap, QImage const & src)
    :baseFilter (src), broken_points{i_dmpmap}
{}

void AverageFilter::setParameters(const vector<double> & iParameters)
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

    while (broken_points.length() != 0)
    {
        QPoint pos{ broken_points.front() };
        broken_points.pop_front();
        pixel px = picture.get(pos);
        px = picture.get_square(px).medium();
    }
}
