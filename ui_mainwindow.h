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
    QLabel *label_6;
    QLabel *label_8;
    QLabel *LblMap;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1005, 527);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(53, 53, 53, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(79, 79, 79, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(66, 66, 66, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(26, 26, 26, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(35, 35, 35, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        QBrush brush6(QColor(199, 199, 199, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush7(QColor(94, 94, 94, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush8(QColor(0, 0, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush8);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush9(QColor(255, 255, 220, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush8);
        QBrush brush10(QColor(199, 199, 199, 128));
        brush10.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush8);
        QBrush brush11(QColor(255, 255, 255, 128));
        brush11.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
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
        SpinDamSize->setMinimum(1);
        SpinDamSize->setMaximum(50);
        SpinDamSize->setValue(10);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, SpinDamSize);

        SpinerDamSize = new QSlider(menu);
        SpinerDamSize->setObjectName(QString::fromUtf8("SpinerDamSize"));
        SpinerDamSize->setMinimumSize(QSize(200, 0));
        SpinerDamSize->setMinimum(1);
        SpinerDamSize->setMaximum(50);
        SpinerDamSize->setValue(10);
        SpinerDamSize->setOrientation(Qt::Horizontal);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, SpinerDamSize);


        verticalLayout_4->addLayout(formLayout_2);

        label_2 = new QLabel(menu);
        label_2->setObjectName(QString::fromUtf8("label_2"));

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
        SpinDamNum->setMaximum(1000);
        SpinDamNum->setValue(50);

        formLayout->setWidget(0, QFormLayout::LabelRole, SpinDamNum);

        SliderDamNum = new QSlider(menu);
        SliderDamNum->setObjectName(QString::fromUtf8("SliderDamNum"));
        SliderDamNum->setMinimumSize(QSize(200, 0));
        SliderDamNum->setMaximum(1000);
        SliderDamNum->setValue(50);
        SliderDamNum->setTracking(true);
        SliderDamNum->setOrientation(Qt::Horizontal);
        SliderDamNum->setInvertedAppearance(false);
        SliderDamNum->setInvertedControls(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, SliderDamNum);


        verticalLayout_4->addLayout(formLayout);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(menu);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        AverageRBtn = new QRadioButton(menu);
        AverageRBtn->setObjectName(QString::fromUtf8("AverageRBtn"));
        AverageRBtn->setChecked(true);

        verticalLayout_3->addWidget(AverageRBtn);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(menu);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        DestroyedCBox = new QCheckBox(menu);
        DestroyedCBox->setObjectName(QString::fromUtf8("DestroyedCBox"));

        verticalLayout->addWidget(DestroyedCBox);

        MapCBox = new QCheckBox(menu);
        MapCBox->setObjectName(QString::fromUtf8("MapCBox"));

        verticalLayout->addWidget(MapCBox);

        FixedCBox = new QCheckBox(menu);
        FixedCBox->setObjectName(QString::fromUtf8("FixedCBox"));

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

        verticalLayout_2->addWidget(BtnLoad);

        btnDamage = new QPushButton(menu);
        btnDamage->setObjectName(QString::fromUtf8("btnDamage"));
        btnDamage->setMinimumSize(QSize(150, 40));

        verticalLayout_2->addWidget(btnDamage);

        btnFix = new QPushButton(menu);
        btnFix->setObjectName(QString::fromUtf8("btnFix"));
        btnFix->setMinimumSize(QSize(150, 40));

        verticalLayout_2->addWidget(btnFix);

        btnSave = new QPushButton(menu);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setMinimumSize(QSize(150, 40));

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
        QPalette palette1;
        QBrush brush12(QColor(18, 18, 18, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush12);
        LblSource->setPalette(palette1);
        LblSource->setAutoFillBackground(true);
        LblSource->setStyleSheet(QString::fromUtf8(""));
        LblSource->setFrameShape(QFrame::Box);
        LblSource->setFrameShadow(QFrame::Sunken);
        LblSource->setLineWidth(1);
        LblSource->setMidLineWidth(1);
        LblSource->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LblSource, 1, 0, 1, 1);

        LblDamaged = new QLabel(frame_2);
        LblDamaged->setObjectName(QString::fromUtf8("LblDamaged"));
        LblDamaged->setMinimumSize(QSize(300, 200));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush12);
        LblDamaged->setPalette(palette2);
        LblDamaged->setAutoFillBackground(true);
        LblDamaged->setStyleSheet(QString::fromUtf8(""));
        LblDamaged->setFrameShape(QFrame::Box);
        LblDamaged->setFrameShadow(QFrame::Sunken);
        LblDamaged->setLineWidth(1);
        LblDamaged->setMidLineWidth(1);
        LblDamaged->setAlignment(Qt::AlignCenter);
        LblDamaged->setWordWrap(true);

        gridLayout->addWidget(LblDamaged, 3, 0, 1, 1);

        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(0, 0));
        label_7->setMaximumSize(QSize(16777215, 25));

        gridLayout->addWidget(label_7, 2, 1, 1, 1);

        LblFixed = new QLabel(frame_2);
        LblFixed->setObjectName(QString::fromUtf8("LblFixed"));
        LblFixed->setMinimumSize(QSize(300, 200));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush12);
        LblFixed->setPalette(palette3);
        LblFixed->setAutoFillBackground(true);
        LblFixed->setStyleSheet(QString::fromUtf8(""));
        LblFixed->setFrameShape(QFrame::Box);
        LblFixed->setFrameShadow(QFrame::Sunken);
        LblFixed->setLineWidth(1);
        LblFixed->setMidLineWidth(1);
        LblFixed->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LblFixed, 3, 1, 1, 1);

        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(0, 0));
        label_5->setMaximumSize(QSize(16777215, 25));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(0, 0));
        label_6->setMaximumSize(QSize(16777215, 25));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(0, 0));
        label_8->setMaximumSize(QSize(16777215, 25));

        gridLayout->addWidget(label_8, 0, 1, 1, 1);

        LblMap = new QLabel(frame_2);
        LblMap->setObjectName(QString::fromUtf8("LblMap"));
        LblMap->setMinimumSize(QSize(300, 200));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush12);
        LblMap->setPalette(palette4);
        LblMap->setAutoFillBackground(true);
        LblMap->setStyleSheet(QString::fromUtf8(""));
        LblMap->setFrameShape(QFrame::Box);
        LblMap->setFrameShadow(QFrame::Sunken);
        LblMap->setLineWidth(1);
        LblMap->setMidLineWidth(1);
        LblMap->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LblMap, 1, 1, 1, 1);


        gridLayout_2->addWidget(frame_2, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(SpinerDamSize, SIGNAL(valueChanged(int)), SpinDamSize, SLOT(setValue(int)));
        QObject::connect(SliderDamNum, SIGNAL(valueChanged(int)), SpinDamNum, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Damages Size", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Num of Damage", nullptr));
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
        label_6->setText(QApplication::translate("MainWindow", "Destroyed Image", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Map Image", nullptr));
        LblMap->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
