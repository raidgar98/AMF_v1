#ifndef DRAWING_H
#define DRAWING_H

#include <QPainter>
#include <QPixmap>
#include <QPoint>
#include <QDebug>
#include <QString>


class Drawing
{

private:
    struct Value
    {
    QString name_of_value;
    double value;
    Qt::GlobalColor color_of_val;
    };

    QPainter painter;
    QPixmap MaeChart;
    QPoint center;
    int r;
    Qt::GlobalColor bg_color;
    Qt::GlobalColor brush_color;
    Qt::GlobalColor pen_color;
    int thickness;
    Value Values[3];
    double SumOfValues=0.0;


protected:
    void drawBaseCircle();

    void drawPoint(int DistanceFromCenter, Qt::GlobalColor color, int th=5, int degrees=0);

    void drawLine(int DistanceFromCenter,Qt::GlobalColor color, int th=1, int degrees=0);

    void drawArrow(int lengthOfArrow,Qt::GlobalColor color,int th=0,int degrees=0);

    void drawLegend(int font_size);

public:
 Drawing();
 Drawing(int win_size);

 void setThicnkess(int th){thickness=th;}
 void setBgColor( Qt::GlobalColor bg){bg_color=bg;}
 void setPenColor( Qt::GlobalColor pen){pen_color=pen;}
 void setBrushColor( Qt::GlobalColor brush){brush_color=brush;}
 void setColors( Qt::GlobalColor bg, Qt::GlobalColor brush, Qt::GlobalColor pen)
 {
    setBgColor(bg);
    setPenColor(pen);
    setBrushColor(brush);
 }

 QPixmap getMaeChart() {return MaeChart;}
 void setValue(int which_val,const double &value, Qt::GlobalColor color,const char* name="");
 void drawChart(Qt::GlobalColor bg_color=Qt::white);





};

#endif // DRAWING_H
