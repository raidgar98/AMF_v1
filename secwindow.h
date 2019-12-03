#ifndef SECWINDOW_H
#define SECWINDOW_H

#include <QDialog>
#include "Quality.h"
namespace Ui {
class secWindow;
}

class secWindow : public QDialog
{
    Q_OBJECT

public:


    explicit secWindow(QWidget *parent = nullptr,Quality *i_quality=nullptr);
    ~secWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::secWindow *ui;
};

#endif // SECWINDOW_H
