/********************************************************************************
** Form generated from reading UI file 'secwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECWINDOW_H
#define UI_SECWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_secWindow
{
public:
    QPushButton *pushButton;
    QLabel *labelAcc;
    QLabel *descPSNR;
    QLabel *labelMAE;
    QLabel *labelMSE;
    QLabel *descMAE;
    QLabel *descMSE;
    QLabel *labelFN;
    QLabel *labelFP;
    QLabel *labelTP;
    QLabel *labelTN;
    QLabel *labelPSNR;
    QLabel *descAcc;
    QLabel *descTP;
    QLabel *descFN;
    QLabel *descFP;
    QLabel *descTN;
    QLabel *imgMaeChart;

    void setupUi(QDialog *secWindow)
    {
        if (secWindow->objectName().isEmpty())
            secWindow->setObjectName(QString::fromUtf8("secWindow"));
        secWindow->resize(710, 539);
        pushButton = new QPushButton(secWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 480, 211, 41));
        labelAcc = new QLabel(secWindow);
        labelAcc->setObjectName(QString::fromUtf8("labelAcc"));
        labelAcc->setGeometry(QRect(130, 370, 91, 31));
        labelAcc->setAutoFillBackground(false);
        labelAcc->setFrameShape(QFrame::Box);
        descPSNR = new QLabel(secWindow);
        descPSNR->setObjectName(QString::fromUtf8("descPSNR"));
        descPSNR->setGeometry(QRect(30, 200, 81, 31));
        descPSNR->setAlignment(Qt::AlignCenter);
        labelMAE = new QLabel(secWindow);
        labelMAE->setObjectName(QString::fromUtf8("labelMAE"));
        labelMAE->setGeometry(QRect(130, 240, 91, 31));
        labelMAE->setAutoFillBackground(false);
        labelMAE->setFrameShape(QFrame::Box);
        labelMSE = new QLabel(secWindow);
        labelMSE->setObjectName(QString::fromUtf8("labelMSE"));
        labelMSE->setGeometry(QRect(130, 280, 91, 31));
        labelMSE->setAutoFillBackground(false);
        labelMSE->setFrameShape(QFrame::Box);
        descMAE = new QLabel(secWindow);
        descMAE->setObjectName(QString::fromUtf8("descMAE"));
        descMAE->setGeometry(QRect(30, 240, 81, 31));
        descMAE->setAlignment(Qt::AlignCenter);
        descMSE = new QLabel(secWindow);
        descMSE->setObjectName(QString::fromUtf8("descMSE"));
        descMSE->setGeometry(QRect(30, 280, 81, 31));
        descMSE->setAlignment(Qt::AlignCenter);
        labelFN = new QLabel(secWindow);
        labelFN->setObjectName(QString::fromUtf8("labelFN"));
        labelFN->setGeometry(QRect(130, 130, 91, 31));
        labelFN->setAutoFillBackground(false);
        labelFN->setFrameShape(QFrame::Box);
        labelFP = new QLabel(secWindow);
        labelFP->setObjectName(QString::fromUtf8("labelFP"));
        labelFP->setGeometry(QRect(130, 90, 91, 31));
        labelFP->setAutoFillBackground(false);
        labelFP->setFrameShape(QFrame::Box);
        labelTP = new QLabel(secWindow);
        labelTP->setObjectName(QString::fromUtf8("labelTP"));
        labelTP->setGeometry(QRect(130, 10, 91, 31));
        labelTP->setAutoFillBackground(false);
        labelTP->setFrameShape(QFrame::Box);
        labelTN = new QLabel(secWindow);
        labelTN->setObjectName(QString::fromUtf8("labelTN"));
        labelTN->setGeometry(QRect(130, 50, 91, 31));
        labelTN->setAutoFillBackground(false);
        labelTN->setFrameShape(QFrame::Box);
        labelPSNR = new QLabel(secWindow);
        labelPSNR->setObjectName(QString::fromUtf8("labelPSNR"));
        labelPSNR->setGeometry(QRect(130, 200, 91, 31));
        labelPSNR->setAutoFillBackground(false);
        labelPSNR->setFrameShape(QFrame::Box);
        descAcc = new QLabel(secWindow);
        descAcc->setObjectName(QString::fromUtf8("descAcc"));
        descAcc->setGeometry(QRect(30, 370, 81, 31));
        descAcc->setAlignment(Qt::AlignCenter);
        descTP = new QLabel(secWindow);
        descTP->setObjectName(QString::fromUtf8("descTP"));
        descTP->setGeometry(QRect(30, 10, 81, 31));
        descTP->setAlignment(Qt::AlignCenter);
        descFN = new QLabel(secWindow);
        descFN->setObjectName(QString::fromUtf8("descFN"));
        descFN->setGeometry(QRect(30, 130, 81, 31));
        descFN->setAlignment(Qt::AlignCenter);
        descFP = new QLabel(secWindow);
        descFP->setObjectName(QString::fromUtf8("descFP"));
        descFP->setGeometry(QRect(30, 90, 81, 31));
        descFP->setAlignment(Qt::AlignCenter);
        descTN = new QLabel(secWindow);
        descTN->setObjectName(QString::fromUtf8("descTN"));
        descTN->setGeometry(QRect(30, 50, 81, 31));
        descTN->setAlignment(Qt::AlignCenter);
        imgMaeChart = new QLabel(secWindow);
        imgMaeChart->setObjectName(QString::fromUtf8("imgMaeChart"));
        imgMaeChart->setGeometry(QRect(240, 10, 450, 450));
        imgMaeChart->setFrameShape(QFrame::Box);

        retranslateUi(secWindow);

        QMetaObject::connectSlotsByName(secWindow);
    } // setupUi

    void retranslateUi(QDialog *secWindow)
    {
        secWindow->setWindowTitle(QApplication::translate("secWindow", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("secWindow", "Zamknij", nullptr));
        labelAcc->setText(QString());
        descPSNR->setText(QApplication::translate("secWindow", "PSNR", nullptr));
        labelMAE->setText(QString());
        labelMSE->setText(QString());
        descMAE->setText(QApplication::translate("secWindow", "MAE", nullptr));
        descMSE->setText(QApplication::translate("secWindow", "MSE", nullptr));
        labelFN->setText(QString());
        labelFP->setText(QString());
        labelTP->setText(QString());
        labelTN->setText(QString());
        labelPSNR->setText(QString());
        descAcc->setText(QApplication::translate("secWindow", "Accuracy", nullptr));
        descTP->setText(QApplication::translate("secWindow", "TP", nullptr));
        descFN->setText(QApplication::translate("secWindow", "FN", nullptr));
        descFP->setText(QApplication::translate("secWindow", "FP", nullptr));
        descTN->setText(QApplication::translate("secWindow", "TN", nullptr));
        imgMaeChart->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class secWindow: public Ui_secWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECWINDOW_H
