#include "secwindow.h"
#include "ui_secwindow.h"

secWindow::secWindow(QWidget *parent,Quality *i_quality) :
    QDialog(parent),
    ui(new Ui::secWindow)
{

    ui->setupUi(this);
    i_quality->makeDetectionMap();
    ui->labelTP->setText(QString::number(i_quality->getTP()));
    ui->labelTN->setText(QString::number(i_quality->getTN()));
    ui->labelFP->setText(QString::number(i_quality->getFP()));
    ui->labelFN->setText(QString::number(i_quality->getFN()));
    ui->labelAcc->setText(QString::number(i_quality->getAccuracy()));
    ui->labelPSNR->setText(QString::number(i_quality->countPsnr()));
    ui->labelMAE->setText(QString::number(i_quality->countMae()));
    ui->labelMSE->setText(QString::number(i_quality->countMse()));
    ui->imgMaeChart->setPixmap(QPixmap::fromImage(i_quality->getDetectionMap().scaledToWidth(i_quality->getDetectionMap().width())));


}

secWindow::~secWindow()
{
    delete ui;
}

void secWindow::on_pushButton_clicked()
{

    close();
}
