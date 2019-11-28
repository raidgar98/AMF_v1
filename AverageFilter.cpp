#include "AverageFilter.h"

AverageFilter::AverageFilter(DmgMap const &i_dmpmap, QImage const & src)
    :baseFilter (src), m_compareMask{i_dmpmap}
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
    if(
            picture.isNull() ||
            m_compareMask.get2Dmap() == nullptr ||
            m_compareMask.getSize().first == 0 ||
            m_compareMask.getSize().second == 0
    )
    {
        qInfo() << "wrong value of parameter!";
        return;
    }

    using pixel = Izimage::pixel;

    size_t height   = m_compareMask.getSize().first;
    size_t width    = m_compareMask.getSize().second;

    bool ** mask = m_compareMask.get2Dmap();
    bool wasDmged;

#pragma message("TODO: Do zmodyfikowania na Izimage::get_square")

    do{
        wasDmged=false;
        for(int row = 1; row < height + 1; row++)
            for(int col = 1; col < width + 1; col++)
                if(mask[row][col] == false)
                {
                    wasDmged = true;
                    int sumR = 0;
                    int sumG = 0;
                    int sumB = 0;

                    for(int i = -1;i<=1;i++)
                        for(int j = -1;j<=1;j++)
                        {
                            pixel colorPixO = picture(row+i,col+j);
                            sumR += colorPixO.R() * mask[row+i][col+j];
                            sumG += colorPixO.G() * mask[row+i][col+j];
                            sumB += colorPixO.B() * mask[row+i][col+j];
                        }
                    picture(col, row) = qRgb(sumR/NUM_PIX, sumG/NUM_PIX, sumB/NUM_PIX);
                    setFixedPixel(col, row, true);
                }
    }while( wasDmged );

    mask = nullptr;

}
