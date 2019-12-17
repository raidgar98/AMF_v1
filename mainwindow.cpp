#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"
#include "QPixmap"
#include "QStandardPaths"
#include "QImage"
#include <QMessageBox>
#include <QResizeEvent>

#include "AverageFilter.h"
#include "vectormedianfilter.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_BtnLoad_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(
                this,
                tr("Open Image"),
                QStandardPaths::writableLocation(QStandardPaths::HomeLocation),
                tr("Image Files (*.png *.jpg *.bmp *.jpeg)")
                );

    SrcImage.load(fileName);
    SrcImage = SrcImage.convertToFormat(default_format);

    ui->LblSource->clear();
    ui->LblSource->setPixmap(QPixmap::fromImage(SrcImage.scaled(ui->LblSource->width(), ui->LblSource->height(), Qt::KeepAspectRatio )));
}

#pragma warning("dodac ograniczenie, jesli do zniszczenia więcej niż 100% obrazu")
void MainWindow::on_btnDamage_clicked()
{
    if(SrcImage.isNull())
        QMessageBox(QMessageBox::Icon::NoIcon, "Warning", "Load the source image").exec();
    else
    {
        int SizeOfDamage=ui->SpinDamSize->value();
        int NumOfDamages=ui->SpinDamNum->value();

        DamagedImage = SrcImage;
        Map = QImage(SrcImage.size(), default_format);
        damaged_points.clear();

        DamageGenerator::makeDamage(DamagedImage, damaged_points, NumOfDamages, SizeOfDamage);
        DamageGenerator::renderMapFromRawData(damaged_points, Map);

        ui->LblMap->clear();
        ui->LblDamaged->clear();

        ui->LblMap->setPixmap(QPixmap::fromImage(Map.scaled(ui->LblMap->width(), ui->LblMap->height(), Qt::KeepAspectRatio)));
        ui->LblDamaged->setPixmap(QPixmap::fromImage(DamagedImage.scaled(ui->LblDamaged->width(), ui->LblDamaged->height(), Qt::KeepAspectRatio)));
    }

}

void MainWindow::on_btnFix_clicked()
{

    if(DamagedImage.isNull())
        QMessageBox(QMessageBox::Icon::NoIcon, "Warning", "No image to fix").exec();
    else
    {
        if(ui->AverageRBtn->isChecked())
        {
            AverageFilter av(DamagedImage, damaged_points);
            av.Correction();
            av.getFixedPicture(FixedImage);
            ui->LblFixed->setPixmap(QPixmap::fromImage(FixedImage.scaled(ui->LblFixed->width(), ui->LblFixed->height(), Qt::KeepAspectRatio)));
        }
        else if(ui->MedianRBtn->isChecked())
        {
            VectorMedianFilter mv(DamagedImage, damaged_points);
            mv.Correction();
            mv.getFixedPicture(FixedImage);
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

void MainWindow::resizeEvent(QResizeEvent *event)
{
    QMainWindow::resizeEvent(event);

    if(!SrcImage.isNull())
    {
        ui->LblSource->clear();
        ui->LblSource->setPixmap(QPixmap::fromImage(SrcImage.scaled(ui->LblSource->width(), ui->LblSource->height(), Qt::KeepAspectRatio )));
    }

    if(!DamagedImage.isNull())
    {
        ui->LblDamaged->clear();
        ui->LblDamaged->setPixmap(QPixmap::fromImage(DamagedImage.scaled(ui->LblDamaged->width(), ui->LblDamaged->height(), Qt::KeepAspectRatio)));
    }

    if(!Map.isNull())
    {
        ui->LblMap->clear();
        ui->LblMap->setPixmap(QPixmap::fromImage(Map.scaled(ui->LblMap->width(), ui->LblMap->height(), Qt::KeepAspectRatio)));
    }

    if(!FixedImage.isNull())
    {
        ui->LblFixed->clear();
        ui->LblFixed->setPixmap(QPixmap::fromImage(FixedImage.scaled(ui->LblFixed->width(), ui->LblFixed->height(), Qt::KeepAspectRatio)));
    }
}
