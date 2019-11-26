#include "AverageFilter.h"

AverageFilter::AverageFilter()
//    :baseFilter{}
{}

AverageFilter::AverageFilter(DmgMap const &i_dmgmap,QImage i_image)
    :m_PicToFix{i_image}
{
    m_compareMask=i_dmgmap;
}
AverageFilter::AverageFilter(DmgMap const &i_dmgmap,short *** i_mask)
    :m_MaskToFix{i_mask}
{
    m_compareMask=i_dmgmap;
}
AverageFilter::~AverageFilter()//?
{
    try
    {
       if(m_MaskToFix!=nullptr)
        {
           delete[] m_MaskToFix[0];
           m_MaskToFix=nullptr;
        }
    }
    catch(std::exception &err)
    {
        qInfo()<<"Error release3Dtab constructor: "<<err.what();
    }
}

void AverageFilter::Correction()
{
    if(getParameters().size()==1)
    {
        if(getParameters().at(0)==0.0) //0.0 --> zapis w postaci zdjecia
        {
            if(!m_PicToFix.isNull() && m_compareMask.get2Dmap()!=nullptr && m_compareMask.getSize().first!=0 && m_compareMask.getSize().second!=0)
            {
                        size_t m_height=m_compareMask.getSize().first;
                        size_t m_width=m_compareMask.getSize().second;
                        bool ** mask = m_compareMask.get2Dmap();
                        bool wasDmged;

                do{
                        wasDmged=false;
                        for(int row = 1;row<m_height-1;row++)
                        {
                            for(int col = 1;col<m_width-1;col++)
                            {
                                if(mask[row][col]==false)
                                {
                                    wasDmged=true;
                                    int index = 0;
                                    int sumR = 0;
                                    int sumG = 0;
                                    int sumB = 0;

                                    for(int i = -1;i<=1;i++)
                                    {
                                        for(int j = -1;j<=1;j++)
                                        {
                                            QRgb colorPixO = m_PicToFix.pixel(row+i,col+j);
                                            sumR += qRed(colorPixO) * mask[row+i][col+j];
                                            sumG += qGreen(colorPixO) * mask[row+i][col+j];
                                            sumB += qBlue(colorPixO) * mask[row+i][col+j];

                                            index++;
                                        }
                                    }
                                    m_PicToFix.setPixel(col, row, qRgb(sumR/NUM_PIX, sumG/NUM_PIX, sumB/NUM_PIX));
                                }
                            }
                        }
                }while(wasDmged==true);
            }
            else
                qInfo()<<"Pic or mask is null";

        }
        if(getParameters().at(0)==1.0) // --> zapis w postaci 3D maski
        {
            if(m_MaskToFix!=nullptr && m_compareMask.get2Dmap()!=nullptr && m_compareMask.getSize().first!=0 && m_compareMask.getSize().second!=0)
            {
                size_t m_height=m_compareMask.getSize().first;
                size_t m_width=m_compareMask.getSize().second;
                bool ** mask = m_compareMask.get2Dmap();
                bool wasDmged;
                do{
                        wasDmged=false;
                        for(int row = 1;row<m_height-1;row++)
                        {
                            for(int col = 1;col<m_width-1;col++)
                            {
                                if(mask[row][col]==false)
                                {
                                    wasDmged=true;
                                    int index = 0;
                                    int sumR = 0;
                                    int sumG = 0;
                                    int sumB = 0;

                                    for(int i = -1;i<=1;i++)
                                    {
                                        for(int j = -1;j<=1;j++)
                                        {

                                            sumR += m_MaskToFix[row+i][col+j][R] * mask[row+i][col+j];
                                            sumG += m_MaskToFix[row+i][col+j][G] * mask[row+i][col+j];
                                            sumB += m_MaskToFix[row+i][col+j][B] * mask[row+i][col+j];

                                            index++;
                                        }
                                    }
                                    m_MaskToFix[row][col][R]= sumR/NUM_PIX;
                                    m_MaskToFix[row][col][G]= sumG/NUM_PIX;
                                    m_MaskToFix[row][col][B]= sumB/NUM_PIX;
                                }
                            }
                        }
                }while(wasDmged==true);

            }
            else
                qInfo()<<"Mask to fix or mask is null";
        }
        else
            qInfo()<<"wrong value of parameter!";
    }
    else
        qInfo()<<"wrong number of parameters!";
}
