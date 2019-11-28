/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QFrame *menu;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QFormLayout *formLayout_2;
    QSpinBox *SpinDamSize;
    QSlider *SpinerDamSize;
    QLabel *label_2;
    QFormLayout *formLayout;
    QSpinBox *SpinDamNum;
    QSlider *SliderDamNum;
    QVBoxLayout *verticalLayout_3;
    QLabel *DamageLbl;
    QLabel *label_3;
    QRadioButton *AverageRBtn;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QCheckBox *DestroyedCBox;
    QCheckBox *MapCBox;
    QCheckBox *FixedCBox;
    QVBoxLayout *verticalLayout_2;
    QPushButton *BtnLoad;
    QPushButton *btnDamage;
    QPushButton *btnFix;
    QPushButton *btnSave;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QLabel *LblSource;
    QLabel *LblDamaged;
    QLabel *label_7;
    QLabel *LblFixed;
    QLabel *label_5;
    QLabel *LblMap;
    QLabel *label_6;
    QLabel *label_8;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1005, 527);
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
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        menu = new QFrame(centralwidget);
        menu->setObjectName(QString::fromUtf8("menu"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(menu->sizePolicy().hasHeightForWidth());
        menu->setSizePolicy(sizePolicy1);
        menu->setFrameShape(QFrame::StyledPanel);
        menu->setFrameShadow(QFrame::Raised);
        menu->setLineWidth(0);
        verticalLayout_6 = new QVBoxLayout(menu);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label = new QLabel(menu);
        label->setObjectName(QString::fromUtf8("label"));
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
        label->setPalette(palette1);

        verticalLayout_4->addWidget(label);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignCenter);
        formLayout_2->setFormAlignment(Qt::AlignCenter);
        formLayout_2->setHorizontalSpacing(20);
        formLayout_2->setVerticalSpacing(0);
        formLayout_2->setContentsMargins(5, 1, 5, 1);
        SpinDamSize = new QSpinBox(menu);
        SpinDamSize->setObjectName(QString::fromUtf8("SpinDamSize"));
        SpinDamSize->setMinimumSize(QSize(75, 0));
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
        SpinDamSize->setPalette(palette2);
        SpinDamSize->setMaximum(100);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, SpinDamSize);

        SpinerDamSize = new QSlider(menu);
        SpinerDamSize->setObjectName(QString::fromUtf8("SpinerDamSize"));
        SpinerDamSize->setMinimumSize(QSize(200, 0));
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
        SpinerDamSize->setPalette(palette3);
        SpinerDamSize->setMaximum(100);
        SpinerDamSize->setOrientation(Qt::Horizontal);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, SpinerDamSize);


        verticalLayout_4->addLayout(formLayout_2);

        label_2 = new QLabel(menu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
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
        label_2->setPalette(palette4);

        verticalLayout_4->addWidget(label_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignCenter);
        formLayout->setFormAlignment(Qt::AlignCenter);
        formLayout->setHorizontalSpacing(20);
        formLayout->setVerticalSpacing(0);
        formLayout->setContentsMargins(5, 1, 5, 1);
        SpinDamNum = new QSpinBox(menu);
        SpinDamNum->setObjectName(QString::fromUtf8("SpinDamNum"));
        SpinDamNum->setMinimumSize(QSize(75, 0));
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
        SpinDamNum->setPalette(palette5);
        SpinDamNum->setMaximum(10000);

        formLayout->setWidget(0, QFormLayout::LabelRole, SpinDamNum);

        SliderDamNum = new QSlider(menu);
        SliderDamNum->setObjectName(QString::fromUtf8("SliderDamNum"));
        SliderDamNum->setMinimumSize(QSize(200, 0));
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
        SliderDamNum->setPalette(palette6);
        SliderDamNum->setMaximum(10000);
        SliderDamNum->setOrientation(Qt::Horizontal);

        formLayout->setWidget(0, QFormLayout::FieldRole, SliderDamNum);


        verticalLayout_4->addLayout(formLayout);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        DamageLbl = new QLabel(menu);
        DamageLbl->setObjectName(QString::fromUtf8("DamageLbl"));
        DamageLbl->setToolTipDuration(3);

        verticalLayout_3->addWidget(DamageLbl);

        label_3 = new QLabel(menu);
        label_3->setObjectName(QString::fromUtf8("label_3"));
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
        label_3->setPalette(palette7);

        verticalLayout_3->addWidget(label_3);

        AverageRBtn = new QRadioButton(menu);
        AverageRBtn->setObjectName(QString::fromUtf8("AverageRBtn"));
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
        AverageRBtn->setPalette(palette8);

        verticalLayout_3->addWidget(AverageRBtn);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(menu);
        label_4->setObjectName(QString::fromUtf8("label_4"));
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
        label_4->setPalette(palette9);

        verticalLayout->addWidget(label_4);

        DestroyedCBox = new QCheckBox(menu);
        DestroyedCBox->setObjectName(QString::fromUtf8("DestroyedCBox"));
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
        DestroyedCBox->setPalette(palette10);

        verticalLayout->addWidget(DestroyedCBox);

        MapCBox = new QCheckBox(menu);
        MapCBox->setObjectName(QString::fromUtf8("MapCBox"));
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
        MapCBox->setPalette(palette11);

        verticalLayout->addWidget(MapCBox);

        FixedCBox = new QCheckBox(menu);
        FixedCBox->setObjectName(QString::fromUtf8("FixedCBox"));
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
        FixedCBox->setPalette(palette12);

        verticalLayout->addWidget(FixedCBox);


        verticalLayout_5->addLayout(verticalLayout);


        verticalLayout_6->addLayout(verticalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        BtnLoad = new QPushButton(menu);
        BtnLoad->setObjectName(QString::fromUtf8("BtnLoad"));
        BtnLoad->setMinimumSize(QSize(150, 40));
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
        BtnLoad->setPalette(palette13);

        verticalLayout_2->addWidget(BtnLoad);

        btnDamage = new QPushButton(menu);
        btnDamage->setObjectName(QString::fromUtf8("btnDamage"));
        btnDamage->setMinimumSize(QSize(150, 40));
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
        btnDamage->setPalette(palette14);

        verticalLayout_2->addWidget(btnDamage);

        btnFix = new QPushButton(menu);
        btnFix->setObjectName(QString::fromUtf8("btnFix"));
        btnFix->setMinimumSize(QSize(150, 40));
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
        btnFix->setPalette(palette15);

        verticalLayout_2->addWidget(btnFix);

        btnSave = new QPushButton(menu);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setMinimumSize(QSize(150, 40));
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
        btnSave->setPalette(palette16);

        verticalLayout_2->addWidget(btnSave);


        verticalLayout_6->addLayout(verticalLayout_2);


        gridLayout_2->addWidget(menu, 0, 0, 1, 1);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(2);
        sizePolicy2.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy2);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(0);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setVerticalSpacing(1);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        LblSource = new QLabel(frame_2);
        LblSource->setObjectName(QString::fromUtf8("LblSource"));
        LblSource->setMinimumSize(QSize(300, 200));
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
        LblSource->setPalette(palette17);
        LblSource->setAutoFillBackground(true);
        LblSource->setFrameShape(QFrame::NoFrame);
        LblSource->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LblSource, 1, 0, 1, 1);

        LblDamaged = new QLabel(frame_2);
        LblDamaged->setObjectName(QString::fromUtf8("LblDamaged"));
        LblDamaged->setMinimumSize(QSize(300, 200));
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
        LblDamaged->setPalette(palette18);
        LblDamaged->setAutoFillBackground(true);
        LblDamaged->setFrameShape(QFrame::NoFrame);
        LblDamaged->setAlignment(Qt::AlignCenter);
        LblDamaged->setWordWrap(true);

        gridLayout->addWidget(LblDamaged, 3, 0, 1, 1);

        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(0, 0));
        label_7->setMaximumSize(QSize(16777215, 25));
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
        label_7->setPalette(palette19);

        gridLayout->addWidget(label_7, 2, 1, 1, 1);

        LblFixed = new QLabel(frame_2);
        LblFixed->setObjectName(QString::fromUtf8("LblFixed"));
        LblFixed->setMinimumSize(QSize(300, 200));
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
        LblFixed->setPalette(palette20);
        LblFixed->setAutoFillBackground(true);
        LblFixed->setFrameShape(QFrame::NoFrame);
        LblFixed->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LblFixed, 3, 1, 1, 1);

        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(0, 0));
        label_5->setMaximumSize(QSize(16777215, 25));
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

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        LblMap = new QLabel(frame_2);
        LblMap->setObjectName(QString::fromUtf8("LblMap"));
        LblMap->setMinimumSize(QSize(300, 200));
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
        LblMap->setPalette(palette22);
        LblMap->setAutoFillBackground(true);
        LblMap->setFrameShape(QFrame::NoFrame);
        LblMap->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LblMap, 1, 1, 1, 1);

        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(0, 0));
        label_6->setMaximumSize(QSize(16777215, 25));
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
        label_6->setPalette(palette23);

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(0, 0));
        label_8->setMaximumSize(QSize(16777215, 25));
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

        gridLayout->addWidget(label_8, 0, 1, 1, 1);


        gridLayout_2->addWidget(frame_2, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(SpinDamNum, SIGNAL(valueChanged(int)), SliderDamNum, SLOT(setValue(int)));
        QObject::connect(SpinerDamSize, SIGNAL(valueChanged(int)), SpinerDamSize, SLOT(setValue(int)));
        QObject::connect(SpinerDamSize, SIGNAL(valueChanged(int)), SpinDamSize, SLOT(setValue(int)));
        QObject::connect(SliderDamNum, SIGNAL(valueChanged(int)), SpinDamNum, SLOT(setValue(int)));
        QObject::connect(SpinDamSize, SIGNAL(valueChanged(int)), SpinerDamSize, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Damages Size", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Num of Damage", nullptr));
        DamageLbl->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Select Filter", nullptr));
        AverageRBtn->setText(QApplication::translate("MainWindow", "Average Filter", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Save", nullptr));
        DestroyedCBox->setText(QApplication::translate("MainWindow", "Destroyed Image", nullptr));
        MapCBox->setText(QApplication::translate("MainWindow", "Map Image", nullptr));
        FixedCBox->setText(QApplication::translate("MainWindow", "Fixed Image", nullptr));
        BtnLoad->setText(QApplication::translate("MainWindow", "Load", nullptr));
        btnDamage->setText(QApplication::translate("MainWindow", "Damage", nullptr));
        btnFix->setText(QApplication::translate("MainWindow", "Fix", nullptr));
        btnSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        LblSource->setText(QString());
        LblDamaged->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "Fixed Image", nullptr));
        LblFixed->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "Source Image", nullptr));
        LblMap->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "Destroyed Image", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Map Image", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
