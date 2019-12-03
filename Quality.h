#pragma once

#include "izimage.h"
#include "utility.h"
#include <QImage>
#include <QtDebug>

using value = double;
using numberOf = int;
//using mapPts = bool;

class Quality
{
private:
    numberOf TP{0};
    numberOf TN{0};
    numberOf FP{0};
    numberOf FN{0};
    value ACCURACY{0.0};

    bool ***m_PixelTypes{nullptr}; //ALBO UZYC MAP albo SET tak jak w average filter
    int m_MapWidth{0};
    int m_MapHeight{0};

    /// @variable : dealocating 3D mask
    void dealocating3Dmask();



/// @variable contain oryginal picture
Izimage m_Orginal;
/// @variable contain fixed picture
Izimage m_Fixed;
///  @variable contain damaged picture
Izimage m_Dmged;
/// @variable contain estimated map
Izimage m_EstM;
/// @variable contain map of compared orginal picture and damaged picture
Izimage m_OrgM;
/// @variable contain map of detected variant of pixels
Izimage m_DetectM;

public:
enum which_to_count
{
    ALL = 0,
    ONLY_TP = 1,
    ONLY_TF = 2,
    ONLY_FP = 3,
    ONLY_FT = 4,
};
/// @variable : set types of pixels (TP,TN,FP,FN) and set them into 3D bool mask
void makeDetectionMap();

Quality() = delete;

Quality(QImage& i_org, QImage& i_fix,QImage& i_dmg);

~Quality();

/// @brief count PSNR value from both images
value countPsnr() const;
/// @brief count MSE value from both images
value countMse() const;
/// @brief count MAE values or one specific value from both images
/// TODO: M_MASKA Z BASE FILTER(jesli tylko tp/fp/tn/fp)
value countMae (which_to_count m_Param=ALL) const;

/// @brief : gets number of True Positive pixels(damaged and repaired)
numberOf getTP() const { return TP; }
/// @brief : gets number of True Negative pixels(not damaged and NOT repaired)
numberOf getTN() const { return TN; }
/// @brief : gets number of False Negative pixels(not damaged but still repaired)
numberOf getFP() const { return FP; }
/// @brief : gets number of False Negative pixels(damaged and NOT repaired)
numberOf getFN() const { return FN; }
/// @brief : gets value of accurate filtering operation
value getAccuracy() const { return ACCURACY; }
/// @brief : gets QImage of estimate map
QImage getEstMap() const { QImage tmp(m_EstM.width(),m_EstM.height(),QImage::Format::Format_RGBA8888); m_EstM.render(tmp);  return tmp; }
/// @brief : gets QImage of org map
QImage getOrgMap() const { QImage tmp(m_OrgM.width(),m_OrgM.height(),QImage::Format::Format_RGBA8888); m_OrgM.render(tmp);  return tmp; }
/// @brief : gets QImage of Detection map
QImage getDetectionMap() const { QImage tmp(m_DetectM.width(),m_DetectM.height(),QImage::Format::Format_RGBA8888); m_DetectM.render(tmp);  return tmp; }

/*
/// @brief convert oryginal Izimage to QImage in argument
void setOryginalPicture(QImage& i_img) const { m_Orginal.render(i_img); }
/// @brief convert fixed Izimage to QImage in argument
void setFixedPicture(QImage& i_img) const { m_Fixed.render(i_img); }
*/
};
