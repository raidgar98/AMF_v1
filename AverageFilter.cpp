#include "AverageFilter.h"

AverageFilter::AverageFilter(DmgMap const &i_dmpmap, baseFilter const &i_baseFilter)
{
    picture=returnFixedPicture();
    fixedPixelMap=i_baseFilter.getFixedPixel();
    m_compareMask=i_dmpmap;
    //pictureHeight=i_baseFilter.pictureHeight;
    //pictureLeght=i_baseFilter.pictureLeght;
}

AverageFilter::AverageFilter(DmgMap const &i_dmgmap,QImage i_image)
    :m_PicToFix{i_image}
{
    m_compareMask=i_dmgmap;
}
AverageFilter::AverageFilter(DmgMap const &i_dmgmap,short *** i_mask,size_t i_width,size_t i_height)
{
    takePicture(i_mask,i_height,i_width);
    m_compareMask=i_dmgmap;
}
AverageFilter& AverageFilter::operator=(const AverageFilter& i_src)
{
    try
    {
        m_Param=i_src.m_Param;
        m_PicToFix=i_src.m_PicToFix;
        m_compareMask=i_src.m_compareMask;
        //operator kopiujace base filter

    } catch (std::exception& err)
     {
        qInfo()<<"Error copy operator: "<<err.what();
      }
    return *this;
}
AverageFilter& AverageFilter::operator=(AverageFilter&& i_src)
{
    try
    {
        m_Param=i_src.m_Param;
        m_PicToFix=i_src.m_PicToFix;
        m_compareMask=i_src.m_compareMask;

        i_src.~AverageFilter();
    } catch (std::exception& err)
     {
        qInfo()<<"Error move operator: "<<err.what();
      }
    return *this;
}
AverageFilter::~AverageFilter()//?
{
    /*
    try
    {
       if(picture!=nullptr)
        {
           delete[] m_MaskToFix[0];
           m_MaskToFix=nullptr;
        }
    }
    catch(std::exception &err)
    {
        qInfo()<<"Error release3Dtab constructor: "<<err.what();
    }
    */
}

void AverageFilter::Correction()
{

        if(m_Param==0.0) //0.0 --> zapis w postaci zdjecia
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
                                    setFixedPixel(col,row);
                                }
                            }
                        }
                }while(wasDmged==true);
            }
            else
                qInfo()<<"Pic or mask is null";

        }
        if(m_Param==1.0) // --> zapis w postaci 3D maski z klesy bazowej
        {
            if(picture!=nullptr && m_compareMask.get2Dmap()!=nullptr && m_compareMask.getSize().first!=pictureHeight && m_compareMask.getSize().second!=pictureLeght)
            {
                size_t m_height=m_compareMask.getSize().first;
                size_t m_width=m_compareMask.getSize().second;
                bool ** mask = m_compareMask.get2Dmap();
                bool wasDmged;
                do{
                        wasDmged=false;
                        for(size_t row = 1;row<m_height-1;row++)
                        {
                            for(size_t col = 1;col<m_width-1;col++)
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

                                            sumR += picture[row+i][col+j][R] * mask[row+i][col+j];
                                            sumG += picture[row+i][col+j][G] * mask[row+i][col+j];
                                            sumB += picture[row+i][col+j][B] * mask[row+i][col+j];

                                            index++;
                                        }
                                    }
                                    picture[row][col][R]= sumR/NUM_PIX;
                                    picture[row][col][G]= sumG/NUM_PIX;
                                    picture[row][col][B]= sumB/NUM_PIX;
                                    setFixedPixel(col,row);
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
