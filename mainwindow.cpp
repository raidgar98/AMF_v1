#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"
#include "QPixmap"
#include "QStandardPaths"
#include "QImage"
#include <QMessageBox>

#include "AverageFilter.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->SliderDamNum, SIGNAL (valueChanged(int)), SLOT (setDamageLbl()));
    connect(ui->SpinerDamSize, SIGNAL (valueChanged(int)), SLOT (setDamageLbl()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

 void MainWindow::setDamageLbl()
 {
    if(!SrcImage.isNull())
    {
        double l=ui->SpinDamNum->value()*ui->SpinDamSize->value()*ui->SpinDamSize->value();
        double m=(SrcImage.width()*SrcImage.height());
        double x=l/m*100.0;
        ui->DamageLbl->setNum(x);
    }
 }

void MainWindow::on_BtnLoad_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Image"), "/home/raidg", tr("Image Files (*.png *.jpg *.bmp *.jpeg)"));
    SrcImage.load(fileName);

    ui->LblSource->setPixmap(QPixmap::fromImage(SrcImage.scaled(ui->LblSource->width(), ui->LblSource->height(), Qt::KeepAspectRatio )));
    ui->LblFixed->clear();
    ui->LblDamaged->clear();
    ui->LblMap->clear();

}

#define cout qDebug()

void MainWindow::on_btnDamage_clicked() //dodac ograniczenie, jesli do zniszczenia więcej niż 100% obrazu
{
    if(SrcImage.isNull())
    {
        QMessageBox msg(QMessageBox::Icon::NoIcon, "Warning", "Load the source image");
        msg.exec();
    }
    else
    {
        int SizeOfDamage=ui->SpinDamSize->value();
        int NumOfDamages=ui->SpinDamNum->value();

        DamagedImage = SrcImage;

        DamageGenerator::makeDamage(SrcImage, DamagedImage, NumOfDamages, SizeOfDamage);

        ui->LblFixed->clear();
        ui->LblDamaged->clear();

        map.reset(new DmgMap(SrcImage, DamagedImage));
        map->makeMapImages();
        Map=map->getMap();

        ui->LblMap->setPixmap(QPixmap::fromImage(Map.scaled(ui->LblMap->width(), ui->LblMap->height(), Qt::KeepAspectRatio)));
        ui->LblDamaged->setPixmap(QPixmap::fromImage(DamagedImage.scaled(ui->LblMap->width(), ui->LblMap->height(), Qt::KeepAspectRatio)));
    }

}

void MainWindow::on_btnFix_clicked()
{

    if(DamagedImage.isNull())
    {
        QMessageBox msg(QMessageBox::Icon::NoIcon, "Warning", "No image to fix");
        msg.exec();
    }
    else
    {
        if(ui->AverageRBtn->isChecked())
        {
            AverageFilter av(map->get_points(), map->getDmg());
            av.Correction();
            av.getFixedPicture(FixedImage);

            ui->LblFixed->setPixmap(QPixmap::fromImage(FixedImage.scaled(ui->LblFixed->width(), ui->LblFixed->height(), Qt::KeepAspectRatio)));
        }
        else
        {
            QMessageBox msg(this);
            msg.setText("Select the filter");
            msg.exec();
        }
    }
}



void MainWindow::on_btnSave_clicked()
{
    if(!ui->DestroyedCBox->isChecked() && !ui->MapCBox->isChecked() && !ui->FixedCBox->isChecked())
    {
        QMessageBox msg(QMessageBox::Icon::NoIcon, "Warning", "Select images to save");
        msg.exec();
    }
    else
    {
        if(ui->DestroyedCBox->isChecked())
        {
            if(DamagedImage.isNull())
            {
                QMessageBox msg(QMessageBox::Icon::NoIcon, "Warning", "No destroyed image to save");
                msg.exec();
            }
            else
            {
                QString fileName=QFileDialog::getSaveFileName(this, tr("Save Destroyed Image"), "", tr("Image Files (*.png *.jpg *.bmp *.jpeg)"));
                DamagedImage.save(fileName);
            }
        }

        if(ui->MapCBox->isChecked())
        {
            if(Map.isNull())
            {
                QMessageBox msg(QMessageBox::Icon::NoIcon, "Warning", "No map image to save");
                msg.exec();
            }
            else
            {
                QString fileName=QFileDialog::getSaveFileName(this, tr("Save Map Image"), "", tr("Image Files (*.png *.jpg *.bmp *.jpeg)"));
                Map.save(fileName);
            }
        }

        if(ui->FixedCBox->isChecked())
        {
            if(FixedImage.isNull())
            {
                QMessageBox msg(QMessageBox::Icon::NoIcon, "Warning", "No fixed image to save");
                msg.exec();
            }
            else
            {
                QString fileName=QFileDialog::getSaveFileName(this, tr("Save Fixed Image"), "", tr("Image Files (*.png *.jpg *.bmp *.jpeg)"));
                FixedImage.save(fileName);
            }
        }

    }

}
