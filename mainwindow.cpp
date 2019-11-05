#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "imageconverter.h"
#include <QDebug>
#include <chrono>

//#define cout qDebug()
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    Izimage im{QImage("/home/raidg/obraz.png").convertToFormat(QImage::Format_RGB888, Qt::ImageConversionFlag::ColorOnly)};
    im.render().save("/home/raidg/obraz1.png");
}

MainWindow::~MainWindow()
{
    delete ui;
}
