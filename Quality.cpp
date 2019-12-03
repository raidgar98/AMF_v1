#include "Quality.h"

#include <cmath>


Quality::Quality(QImage& i_org, QImage& i_fix,QImage& i_dmg)
    :m_Orginal(i_org),m_Fixed(i_fix),m_Dmged(i_dmg),m_EstM(i_org),m_OrgM(i_org),m_DetectM(i_org) //domyslny konstuktor pusty(?)
{
    //Tworzenie mapy oryginalnej TODO: ZAMIENIC NA DMGMAP ?(czy powielenie niewielkije czesci kody gorsze od przekazywnia calyhc klas?)
    //m_Dmged==m_Orginal -> mozna by dodac operartor porownania calych obiektow
    if(m_Orginal.height() == m_Dmged.height() && m_Orginal.width() == m_Dmged.width())
    {
        //auto fixed = m_Fixed.begin();
        auto org = m_Orginal.begin();
        auto dmged = m_Dmged.begin();
        auto orgMap = m_OrgM.begin();
        for(;org!=m_Orginal.end() || dmged!=m_Dmged.end() || orgMap!=m_OrgM.end();dmged++,org++,orgMap++)
        {
            if((*org).R()==(*dmged).R() && (*org).G()==(*dmged).G() && (*org).B()==(*dmged).B())
                (*orgMap).set(qRgb(0,0,0));
                else
                (*orgMap).set(qRgb(255,255,255));
        }
    }
    //
    //Tworzenie mapy estymowanej TODO: dodac opcje w DmgMap i stamtad pobrac estmap
    //m_Dmged==m_Orginal -> mozna by dodac operartor porownania calych obiektow
    if(m_Orginal.width() == m_Fixed.width() && m_Orginal.height()== m_Fixed.height() && m_Orginal.height() == m_Dmged.height() && m_Orginal.width() == m_Dmged.width())
    {
        auto fixed = m_Fixed.begin();
        auto org = m_Orginal.begin();
        auto dmged = m_Dmged.begin();
        auto estMap = m_EstM.begin();
        auto orgMap = m_OrgM.begin();
        for(;orgMap!=m_OrgM.end() ||  fixed!= m_Fixed.end() || org!=m_Orginal.end() || dmged!=m_Dmged.end() || estMap!=m_EstM.end();orgMap++,fixed++,dmged++,org++,estMap++)
        {
            if((*orgMap).R()==0 && (*orgMap).G()==0 && (*orgMap).B()==0)
            {
                if((*org).R()==(*fixed).R() && (*org).G()==(*fixed).G() && (*org).B()==(*fixed).B())
                    (*estMap).set(qRgb(0,0,0));
                else
                    (*estMap).set(qRgb(255,255,255));
            }
            else
            {
                if((*dmged).R()==(*fixed).R() && (*dmged).G()==(*fixed).G() && (*dmged).B()==(*fixed).B())
                    (*estMap).set(qRgb(0,0,0));
                else
                    (*estMap).set(qRgb(255,255,255));
            }
        }
    }
}


void Quality::dealocating3Dmask()
{
    if(m_PixelTypes!=nullptr)
      {
          for (int i = 0; i < m_MapWidth; i++)
          {
              for (int j = 0; j < m_MapHeight; j++)
                  delete[] m_PixelTypes[i][j];
              delete[] m_PixelTypes[i];
          }
          delete[] m_PixelTypes;
          m_PixelTypes=nullptr;
          m_MapWidth=0;
          m_MapHeight=0;
      }
}
Quality::~Quality()
{
    dealocating3Dmask();
}

//TODO: Mask 3D ; najpierw zaznacza na mapach estymowanych a potem porównuje kolory map i wtdy liczy(accuracy cpp)
void Quality::makeDetectionMap()
{
    //m_Dmged==m_Orginal -> mozna by dodac operartor porownania calych obiektow
    if(m_Orginal.width() == m_Fixed.width() && m_Orginal.height()== m_Fixed.height() && m_Orginal.height() == m_Dmged.height() && m_Orginal.width() == m_Dmged.width())
    {

        dealocating3Dmask();

        auto fixed = m_Fixed.begin();
        auto org = m_Orginal.begin();
        auto dmged = m_Dmged.begin();
        auto orgM = m_OrgM.begin();
        auto estM = m_EstM.begin();
        auto detectM=m_DetectM.begin();
        /*
        m_MapWidth=int(m_Orginal.width());
        m_MapHeight=int(m_Orginal.height());
        int imageDepth = 3;
        //ALOKACJA
              m_PixelTypes = new bool **[size_t(m_MapWidth)]();
                 for (int i = 0; i < m_MapWidth; i++)
                 {
                     m_PixelTypes[i] = new bool *[size_t(m_MapHeight)]();
                     for (int j = 0; j < m_MapHeight; j++)
                         m_PixelTypes[i][j] = new bool [size_t(imageDepth)]();
                 }
              for (int i=0;i<m_MapWidth;i++)
              {
                  for (int  j=0;j<m_MapHeight;j++)
                  {
                      for (int  k=0;k<imageDepth;k++)
                      {
                          m_PixelTypes[i][j][k]=0;
                      }

                  }
              }
        */


        for(;orgM!=m_OrgM.end() || estM!=m_EstM.end() || detectM!=m_DetectM.end() || fixed!=m_Fixed.end() || org!=m_Orginal.end() || dmged!=m_Dmged.end();dmged++,fixed++,org++,orgM++,estM++,detectM++)
        {
            //TP  ((*org)!=(*dmged) && (*org)!=(*fixed) && (*dmged)!=(*fixed))
            if((*orgM).R()==255 && (*orgM).G()==255 && (*org).B()==255     &&      (*estM).R()==255 && (*estM).G()==255 && (*org).B()==255 )
            {
                (*detectM).set(qRgb(0,255,0));
                TP++;
            }
            //FP    ((*org)==(*dmged) && (*org)!=(*fixed))
            if((*orgM).R()==0 && (*orgM).G()==0 && (*org).B()==0    &&      (*estM).R()==255 && (*estM).G()==255 && (*org).B()==255 )
            {
                (*detectM).set(qRgb(255,0,0));
                FP++;
            }
            //FN    ((*org)!=(*dmged) && (*dmged)==(*fixed))
            if((*orgM).R()==255 && (*orgM).G()==255 && (*org).B()==255    &&      (*estM).R()==0 && (*estM).G()==0 && (*org).B()==0 )
            {
                (*detectM).set(qRgb(255,255,255));
                FN++;
            }
            //TN ((*org)==(*dmged) && (*org)==(*fixed))
            if((*orgM).R()==0 && (*orgM).G()==0 && (*org).B()==0     &&      (*estM).R()==0 && (*estM).G()==0 && (*org).B()==0 )
            {
                (*detectM).set(qRgb(0,0,0));
                TN++;
            }

        }

        ACCURACY = double(TP + TN) / double(TP+TN+FP+FN);
    }
}

value Quality::countMse() const
{
    if(m_Orginal.width() == m_Fixed.width() && m_Orginal.height()== m_Fixed.height())
    {
                size_type SIZE = m_Orginal.width()*m_Orginal.height();
                double valR = 0.0;
                double valG = 0.0;
                double valB = 0.0;

                auto y = m_Fixed.begin();
                auto x = m_Orginal.begin();


                            for(;y!=m_Fixed.end() || x!=m_Fixed.end();x++,y++)
                            {
                                double Ro = (*x).R();
                                double Go = (*x).G();
                                double Bo = (*x).B();
                                double Rr = (*y).R();
                                double Gr = (*y).G();
                                double Br = (*y).B();

                                valR += (Ro - Rr)*(Ro - Rr);
                                valG += (Go - Gr)*(Go - Gr);
                                valB += (Bo - Br)*(Bo - Br);
                            }

                valR /= SIZE;
                valG /= SIZE;
                valB /= SIZE;
                return (valR + valG + valB) / 3.0;
    }
    else
    {
        qInfo()<<"MSE else";
        return 0;
    }

}
//TODO
value Quality::countMae(which_to_count m_Param) const
{

    if(m_Orginal.width() == m_Fixed.width() && m_Orginal.height()== m_Fixed.height())
    {
                size_type SIZE = m_Orginal.width()*m_Orginal.height();
                double valR = 0.0;
                double valG = 0.0;
                double valB = 0.0;

                auto y = m_Fixed.begin();
                auto x = m_Orginal.begin();


                            for(;y!=m_Fixed.end() || x!=m_Fixed.end();x++,y++)
                            {

                                double Ro = (*x).R();
                                double Go = (*x).G();
                                double Bo = (*x).B();
                                double Rr = (*y).R();
                                double Gr = (*y).G();
                                double Br = (*y).B();

								valR += std::abs(Ro - Rr);
								valG += std::abs(Go - Gr);
								valB += std::abs(Bo - Br);

                            }

                valR /= SIZE;
                valG /= SIZE;
                valB /= SIZE;
                return (valR + valG + valB) / 3.0;
    }
    else
    {
        qInfo()<<"MAE else";
        return 0;
    }
}

value Quality::countPsnr() const
{
    value MSE = 0.0;
       MSE = countMse();

       if(MSE>0)
		   return 10.0 * std::log10((255.0*255.0)/MSE);
       else
           return 99;
}
