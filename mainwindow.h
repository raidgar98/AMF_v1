#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"DamageGenerator.h"
#include "filter_average.h"
#include <damagekasia.h>
#include <DmgMap.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_BtnLoad_clicked();

    void on_btnDamage_clicked();

    void on_btnFix_clicked();
    void setDamageLbl();
    void on_btnSave_clicked();

private:
    Ui::MainWindow *ui;
    QImage SrcImage;

    QImage DamagedImage, FixedImage, Map;


protected:
     DamageGenerator damage();
};
#endif // MAINWINDOW_H
