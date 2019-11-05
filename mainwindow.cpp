#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"
#include "QPixmap"
#include "QStandardPaths"
#include "QImage"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
   delete SrcImage;
    delete  SrcPixmap;
    SrcImage=nullptr;
    SrcPixmap=nullptr;
    delete ui;
}

void MainWindow::decreaseImage()
{
    int x;
    if((*SrcImage).height()>(*SrcImage).width())
    x=(*SrcImage).height()/500;
    else
    x=(*SrcImage).width()/500;

    (*SrcImage)=(*SrcImage).scaled((*SrcImage).width()/x, (*SrcImage).height()/x,Qt::KeepAspectRatio, Qt::FastTransformation);
    (*SrcPixmap)=(*SrcPixmap).scaled((*SrcPixmap).width()/x, (*SrcPixmap).height()/x, Qt::KeepAspectRatio,Qt::FastTransformation);


}

void MainWindow::on_BtnLoad_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Image"), "", tr("Image Files (*.png *.jpg *.bmp *.jpeg)"));
    SrcImage=new QImage(fileName);
    SrcPixmap=new QPixmap(fileName);

    decreaseImage();
    //QString temp=QString("HEIGHT: Im-%1, Px-%2").arg((*SrcImage).height()).arg((*SrcPixmap).height());
    //ui->LblDamaged->setText(temp);

   ui->LblSource->setPixmap(*SrcPixmap);
   ui->LblSource->setScaledContents(true);


   ui->LblFixed->setPixmap(QPixmap::fromImage(*SrcImage));
   ui->LblFixed->setScaledContents(true);


}

void MainWindow::on_btnDamage_clicked()
{
    int SizeOfDamage=ui->SpinDamSize->value();
    int NumOfDamages=ui->SpinDamSize->value();

  DamageGenerator::makeDamage(nullptr,nullptr,nullptr,(size_t)(*SrcImage).width(),(size_t)(*SrcImage).height(),(size_t)NumOfDamages,(size_t)SizeOfDamage);

}

void MainWindow::on_btnFix_clicked()
{

}
