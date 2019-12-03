#pragma once

//Qt libraries
#include <QMainWindow>
#include"DamageGenerator.h"
//#include "filter_average.h"
#include "DamageGenerator.h"
#include "Quality.h"
#include <memory>

#include "secwindow.h"

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

    /// @brief on click events. Self describing...
    void on_BtnLoad_clicked();
    void on_btnDamage_clicked();
    void on_btnFix_clicked();
    void on_btnSave_clicked();
	void on_btnQuality_clicked();

    /// @brief quick overload - on resize, picture resize althrough
    void resizeEvent(QResizeEvent* event) override;


private:
    Ui::MainWindow *ui;
    secWindow *secondwindow;

    /// @variable Images
    QImage SrcImage, DamagedImage, FixedImage, Map;

    /// @variable storage of missed pixels
    container damaged_points;

protected:
     DamageGenerator damage();


};
