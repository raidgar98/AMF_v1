#pragma once

//Qt libraries
#include <QMainWindow>

//STL libraries
#include <memory>

//Own dependencies
#include "DamageGenerator.h"


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

    /// @brief quick overload - on resize, picture resize althrough
    void resizeEvent(QResizeEvent* event) override;

private:

    /// @variable pointer to whole ui
    Ui::MainWindow *ui;

    /// @variable Images
    QImage SrcImage, DamagedImage, FixedImage, Map;

    /// @variable storage of missed pixels
    std::unique_ptr<container<bool>> damaged_points;

protected:
     DamageGenerator damage();
};
