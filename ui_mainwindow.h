/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *BtnLoad;
    QPushButton *btnDamage;
    QPushButton *btnFix;
    QLabel *LblSource;
    QLabel *LblDamaged;
    QLabel *LblFixed;
    QSlider *SpinerDamSize;
    QSlider *SliderDamNum;
    QSpinBox *SpinDamSize;
    QSpinBox *SpinDamNum;
    QLabel *label;
    QLabel *label_2;
    QLabel *LblMap;
    QRadioButton *AverageRBtn;
    QLabel *label_3;
    QCheckBox *DestroyedCBox;
    QCheckBox *MapCBox;
    QCheckBox *FixedCBox;
    QLabel *label_4;
    QPushButton *btnSave;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *DamageLbl;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1554, 929);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(238, 232, 229, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(246, 243, 242, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(119, 116, 114, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(159, 155, 153, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush7(QColor(0, 0, 0, 128));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        MainWindow->setPalette(palette);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        BtnLoad = new QPushButton(centralwidget);
        BtnLoad->setObjectName(QString::fromUtf8("BtnLoad"));
        BtnLoad->setGeometry(QRect(1290, 510, 200, 70));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush8(QColor(162, 158, 157, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush8);
        QBrush brush9(QColor(243, 237, 236, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush9);
        QBrush brush10(QColor(202, 197, 196, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        QBrush brush11(QColor(81, 79, 78, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush11);
        QBrush brush12(QColor(108, 105, 105, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush13(QColor(208, 206, 206, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        BtnLoad->setPalette(palette1);
        btnDamage = new QPushButton(centralwidget);
        btnDamage->setObjectName(QString::fromUtf8("btnDamage"));
        btnDamage->setGeometry(QRect(1290, 590, 200, 70));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        btnDamage->setPalette(palette2);
        btnFix = new QPushButton(centralwidget);
        btnFix->setObjectName(QString::fromUtf8("btnFix"));
        btnFix->setGeometry(QRect(1290, 670, 200, 70));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        btnFix->setPalette(palette3);
        LblSource = new QLabel(centralwidget);
        LblSource->setObjectName(QString::fromUtf8("LblSource"));
        LblSource->setGeometry(QRect(10, 40, 600, 400));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        LblSource->setPalette(palette4);
        LblSource->setAutoFillBackground(true);
        LblSource->setFrameShape(QFrame::NoFrame);
        LblSource->setAlignment(Qt::AlignCenter);
        LblDamaged = new QLabel(centralwidget);
        LblDamaged->setObjectName(QString::fromUtf8("LblDamaged"));
        LblDamaged->setGeometry(QRect(10, 470, 600, 400));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        LblDamaged->setPalette(palette5);
        LblDamaged->setAutoFillBackground(true);
        LblDamaged->setFrameShape(QFrame::NoFrame);
        LblDamaged->setAlignment(Qt::AlignCenter);
        LblDamaged->setWordWrap(true);
        LblFixed = new QLabel(centralwidget);
        LblFixed->setObjectName(QString::fromUtf8("LblFixed"));
        LblFixed->setGeometry(QRect(630, 470, 600, 400));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        LblFixed->setPalette(palette6);
        LblFixed->setAutoFillBackground(true);
        LblFixed->setFrameShape(QFrame::NoFrame);
        LblFixed->setAlignment(Qt::AlignCenter);
        SpinerDamSize = new QSlider(centralwidget);
        SpinerDamSize->setObjectName(QString::fromUtf8("SpinerDamSize"));
        SpinerDamSize->setGeometry(QRect(1280, 50, 160, 22));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        SpinerDamSize->setPalette(palette7);
        SpinerDamSize->setMaximum(100);
        SpinerDamSize->setOrientation(Qt::Horizontal);
        SliderDamNum = new QSlider(centralwidget);
        SliderDamNum->setObjectName(QString::fromUtf8("SliderDamNum"));
        SliderDamNum->setGeometry(QRect(1280, 130, 160, 22));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        SliderDamNum->setPalette(palette8);
        SliderDamNum->setMaximum(10000);
        SliderDamNum->setOrientation(Qt::Horizontal);
        SpinDamSize = new QSpinBox(centralwidget);
        SpinDamSize->setObjectName(QString::fromUtf8("SpinDamSize"));
        SpinDamSize->setGeometry(QRect(1460, 50, 61, 22));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        SpinDamSize->setPalette(palette9);
        SpinDamSize->setMaximum(100);
        SpinDamNum = new QSpinBox(centralwidget);
        SpinDamNum->setObjectName(QString::fromUtf8("SpinDamNum"));
        SpinDamNum->setGeometry(QRect(1460, 130, 61, 22));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        SpinDamNum->setPalette(palette10);
        SpinDamNum->setMaximum(10000);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(1280, 20, 81, 16));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette11.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette11.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette11.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette11.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush);
        palette11.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette11.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette11.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette11.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette11.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette11.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette11.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette11.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette11.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette11.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette11.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette11.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette11.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        label->setPalette(palette11);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1280, 110, 91, 16));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette12.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette12.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette12.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette12.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush);
        palette12.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette12.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette12.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette12.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette12.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette12.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette12.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette12.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette12.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette12.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette12.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette12.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette12.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        label_2->setPalette(palette12);
        LblMap = new QLabel(centralwidget);
        LblMap->setObjectName(QString::fromUtf8("LblMap"));
        LblMap->setGeometry(QRect(630, 40, 600, 400));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette13.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette13.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette13.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette13.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush);
        palette13.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette13.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette13.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette13.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette13.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette13.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette13.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette13.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette13.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette13.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette13.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette13.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette13.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette13.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        LblMap->setPalette(palette13);
        LblMap->setAutoFillBackground(true);
        LblMap->setFrameShape(QFrame::NoFrame);
        LblMap->setAlignment(Qt::AlignCenter);
        AverageRBtn = new QRadioButton(centralwidget);
        AverageRBtn->setObjectName(QString::fromUtf8("AverageRBtn"));
        AverageRBtn->setGeometry(QRect(1290, 240, 161, 22));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette14.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette14.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette14.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette14.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush);
        palette14.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette14.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette14.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette14.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette14.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette14.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette14.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette14.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette14.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette14.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette14.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette14.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette14.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        AverageRBtn->setPalette(palette14);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(1290, 210, 101, 16));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette15.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette15.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette15.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette15.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush);
        palette15.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette15.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette15.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette15.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette15.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette15.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette15.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette15.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette15.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette15.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette15.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette15.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette15.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette15.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        label_3->setPalette(palette15);
        DestroyedCBox = new QCheckBox(centralwidget);
        DestroyedCBox->setObjectName(QString::fromUtf8("DestroyedCBox"));
        DestroyedCBox->setGeometry(QRect(1280, 350, 161, 22));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette16.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette16.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette16.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette16.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush);
        palette16.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette16.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette16.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette16.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette16.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette16.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette16.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette16.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette16.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette16.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette16.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette16.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette16.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette16.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        DestroyedCBox->setPalette(palette16);
        MapCBox = new QCheckBox(centralwidget);
        MapCBox->setObjectName(QString::fromUtf8("MapCBox"));
        MapCBox->setGeometry(QRect(1280, 380, 161, 22));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette17.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette17.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette17.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette17.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush);
        palette17.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette17.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette17.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette17.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette17.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette17.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette17.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette17.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette17.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette17.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette17.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette17.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette17.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette17.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        MapCBox->setPalette(palette17);
        FixedCBox = new QCheckBox(centralwidget);
        FixedCBox->setObjectName(QString::fromUtf8("FixedCBox"));
        FixedCBox->setGeometry(QRect(1280, 410, 171, 22));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette18.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette18.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette18.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette18.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush);
        palette18.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette18.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette18.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette18.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette18.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette18.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette18.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette18.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette18.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette18.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette18.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette18.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette18.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette18.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        FixedCBox->setPalette(palette18);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(1290, 330, 55, 16));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette19.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette19.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette19.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette19.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette19.setBrush(QPalette::Active, QPalette::Text, brush);
        palette19.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette19.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette19.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette19.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette19.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette19.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette19.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette19.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette19.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette19.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette19.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette19.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette19.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette19.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette19.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette19.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette19.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette19.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette19.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette19.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette19.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        label_4->setPalette(palette19);
        btnSave = new QPushButton(centralwidget);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(1290, 750, 200, 70));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette20.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette20.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette20.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette20.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette20.setBrush(QPalette::Active, QPalette::Text, brush);
        palette20.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette20.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette20.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette20.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette20.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette20.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette20.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette20.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette20.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette20.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette20.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette20.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette20.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette20.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette20.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette20.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        btnSave->setPalette(palette20);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 20, 181, 16));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette21.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette21.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette21.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette21.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette21.setBrush(QPalette::Active, QPalette::Text, brush);
        palette21.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette21.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette21.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette21.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette21.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette21.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette21.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette21.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette21.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette21.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette21.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette21.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette21.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette21.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette21.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette21.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette21.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette21.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette21.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette21.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette21.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette21.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette21.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette21.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette21.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette21.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette21.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette21.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette21.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette21.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        label_5->setPalette(palette21);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 450, 181, 16));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette22.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette22.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette22.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette22.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette22.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette22.setBrush(QPalette::Active, QPalette::Text, brush);
        palette22.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette22.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette22.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette22.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette22.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette22.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette22.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette22.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette22.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette22.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette22.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette22.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette22.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette22.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette22.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette22.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette22.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette22.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette22.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette22.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette22.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette22.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette22.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette22.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette22.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette22.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette22.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette22.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette22.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette22.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette22.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        label_6->setPalette(palette22);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(630, 450, 181, 16));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette23.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette23.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette23.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette23.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette23.setBrush(QPalette::Active, QPalette::Text, brush);
        palette23.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette23.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette23.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette23.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette23.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette23.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette23.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette23.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette23.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette23.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette23.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette23.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette23.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette23.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette23.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette23.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette23.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette23.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette23.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette23.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette23.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette23.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette23.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette23.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette23.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette23.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette23.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette23.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette23.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette23.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette23.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette23.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        label_7->setPalette(palette23);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(630, 20, 181, 16));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette24.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette24.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette24.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette24.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette24.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette24.setBrush(QPalette::Active, QPalette::Text, brush);
        palette24.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette24.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette24.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette24.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette24.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette24.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette24.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette24.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette24.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette24.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette24.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette24.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette24.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette24.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette24.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette24.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette24.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette24.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette24.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette24.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette24.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette24.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette24.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette24.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette24.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette24.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette24.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette24.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette24.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette24.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette24.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette24.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette24.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        label_8->setPalette(palette24);
        DamageLbl = new QLabel(centralwidget);
        DamageLbl->setObjectName(QString::fromUtf8("DamageLbl"));
        DamageLbl->setGeometry(QRect(1290, 170, 231, 16));
        DamageLbl->setToolTipDuration(3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1554, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(SpinerDamSize, SIGNAL(valueChanged(int)), SpinerDamSize, SLOT(setValue(int)));
        QObject::connect(SpinerDamSize, SIGNAL(valueChanged(int)), SpinDamSize, SLOT(setValue(int)));
        QObject::connect(SliderDamNum, SIGNAL(valueChanged(int)), SpinDamNum, SLOT(setValue(int)));
        QObject::connect(SpinDamNum, SIGNAL(valueChanged(int)), SliderDamNum, SLOT(setValue(int)));
        QObject::connect(SpinDamSize, SIGNAL(valueChanged(int)), SpinerDamSize, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        BtnLoad->setText(QApplication::translate("MainWindow", "Load", nullptr));
        btnDamage->setText(QApplication::translate("MainWindow", "Damage", nullptr));
        btnFix->setText(QApplication::translate("MainWindow", "Fix", nullptr));
        LblSource->setText(QString());
        LblDamaged->setText(QString());
        LblFixed->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Damages Size", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Num of Damage", nullptr));
        LblMap->setText(QString());
        AverageRBtn->setText(QApplication::translate("MainWindow", "Average Filter", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Select Filter", nullptr));
        DestroyedCBox->setText(QApplication::translate("MainWindow", "Destroyed Image", nullptr));
        MapCBox->setText(QApplication::translate("MainWindow", "Map Image", nullptr));
        FixedCBox->setText(QApplication::translate("MainWindow", "Fixed Image", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Save", nullptr));
        btnSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Source Image", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Destroyed Image", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Fixed Image", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Map Image", nullptr));
        DamageLbl->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
