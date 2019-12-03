#include "Drawing.h"

#include <cmath>

Drawing::Drawing(int win_size)
    :MaeChart(win_size,win_size),bg_color{Qt::white},brush_color{Qt::black},pen_color{Qt::black},thickness{3}
{

    MaeChart.fill(Qt::white);
    Values[0].name_of_value="MAE (FP)";
    Values[0].color_of_val=Qt::red;
    Values[1].name_of_value="MAE (TP)";
    Values[1].color_of_val=Qt::green;
    Values[2].name_of_value="MAE (FN)";
    Values[2].color_of_val=Qt::blue;

}
Drawing::Drawing()
    :Drawing(600)
{}


void Drawing::drawBaseCircle()
{

    painter.begin(&MaeChart);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::HighQualityAntialiasing);
    center.setX(MaeChart.width()/2);
    center.setY(MaeChart.height()/2-25);
    r=MaeChart.width()/2-66;
    painter.setPen(QPen(pen_color, thickness+thickness+5));
    painter.drawEllipse(center, r, r);
    painter.setPen(QPen(pen_color, thickness+2));
    painter.drawEllipse(center, int(r*0.75), int(r*0.75));
    painter.drawEllipse(center, int(r*0.50), int(r*0.50));
    painter.drawEllipse(center, int(r*0.25), int(r*0.25));
    painter.drawEllipse(center, 1, 1);

    painter.end();

}

void Drawing::drawLegend(int font_size)
{
    painter.begin(&MaeChart);

    QFont font;
    font.setPixelSize(font_size);

    painter.setFont(font);
    painter.setPen(QPen(pen_color, thickness));


    painter.fillRect(MaeChart.width()/2,MaeChart.height(),font_size+10,15,brush_color);
    painter.drawRect(10,MaeChart.height()-40,MaeChart.width()-18,30);

    painter.fillRect(12,MaeChart.height()-15,20,-20,Qt::black);
    painter.drawText(32,MaeChart.height()-15,"MAE");
    painter.fillRect(int(0.25*MaeChart.width()),MaeChart.height()-15,20,-20,Values[0].color_of_val);
    painter.drawText(int(0.25*MaeChart.width())+20,MaeChart.height()-15,Values[0].name_of_value);
    painter.fillRect(int(0.5*MaeChart.width()),MaeChart.height()-15,20,-20,Values[1].color_of_val);
    painter.drawText(int(0.5*MaeChart.width())+20,MaeChart.height()-15,Values[1].name_of_value);
    painter.fillRect(int(0.75*MaeChart.width()),MaeChart.height()-15,20,-20,Values[2].color_of_val);
    painter.drawText(int(0.75*MaeChart.width())+20,MaeChart.height()-15,Values[2].name_of_value);


    QRectF triSpace = QRectF(center.x()-55,center.y()+r+8,95,30);
    QPainterPath path;
    path.moveTo(triSpace.left(), triSpace.top());
    path.lineTo(triSpace.right(), triSpace.top());
    path.lineTo(triSpace.right(), triSpace.bottom());
    path.lineTo(triSpace.left(), triSpace.bottom());
    painter.fillPath(path, QBrush(Qt::black));
    painter.setPen(Qt::white);
    painter.drawText(triSpace,Qt::AlignCenter,QString::number(round(SumOfValues*10000.0)/10000.0));

    QPainterPath pathUp;
    QRectF triSpaceUp = QRectF(center.x()-50,center.y()-r-36,110,30);
    pathUp.moveTo(triSpaceUp.left(), triSpaceUp.top());
    pathUp.lineTo(triSpaceUp.right(), triSpaceUp.top());
    pathUp.lineTo(triSpaceUp.right(), triSpaceUp.bottom());
    pathUp.lineTo(triSpaceUp.left(), triSpaceUp.bottom());
    painter.fillPath(pathUp, QBrush(Values[0].color_of_val));
	painter.drawText(triSpaceUp,Qt::AlignCenter, QString::number( std::round(Values[0].value*10000.0)/10000.0));

    QPainterPath pathLeft;
    QRectF triSpaceLeft = QRectF(5,center.y()+150,95,30);
    pathLeft.moveTo(triSpaceLeft.left(), triSpaceLeft.top());
    pathLeft.lineTo(triSpaceLeft.right(), triSpaceLeft.top());
    pathLeft.lineTo(triSpaceLeft.right(), triSpaceLeft.bottom());
    pathLeft.lineTo(triSpaceLeft.left(), triSpaceLeft.bottom());
    painter.fillPath(pathLeft, QBrush(Values[1].color_of_val));
    painter.drawText(triSpaceLeft,Qt::AlignCenter,QString::number(round(Values[1].value*10000.0)/10000.0));

    QPainterPath pathRight;
    QRectF triSpaceRight = QRectF(MaeChart.width()-100,center.y()+150,90,30);
    pathRight.moveTo(triSpaceRight.left(), triSpaceRight.top());
    pathRight.lineTo(triSpaceRight.right(), triSpaceRight.top());
    pathRight.lineTo(triSpaceRight.right(), triSpaceRight.bottom());
    pathRight.lineTo(triSpaceRight.left(), triSpaceRight.bottom());
    painter.fillPath(pathRight, QBrush(Values[2].color_of_val));
    painter.drawText(triSpaceRight,Qt::AlignCenter,QString::number(round(Values[2].value*10000.0)/10000.0));



    painter.end();
}

void Drawing::drawLine(int DistanceFromCenter,Qt::GlobalColor color, int th, int degrees)
{
    painter.begin(&MaeChart);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::HighQualityAntialiasing);
    painter.setPen(QPen(color, th));
    painter.translate(center.x(),center.y());
    painter.rotate(degrees);
    painter.drawLine(0,0,0,DistanceFromCenter);

    painter.end();
}
void Drawing::drawPoint(int DistanceFromCenter, Qt::GlobalColor color, int th, int degrees)
{
    painter.begin(&MaeChart);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::HighQualityAntialiasing);
    painter.translate(center);
    QPoint p0(0,DistanceFromCenter);

    painter.setBrush(color);
    painter.setPen(color);
    painter.rotate(degrees);
    painter.drawEllipse(p0,th,th);

    painter.end();
}
void Drawing::drawArrow(int lengthOfArrow,Qt::GlobalColor color,int th,int degrees)
{

    drawLine(lengthOfArrow,color,th,degrees);
    drawPoint(lengthOfArrow,color,int(th*1.5),degrees);
}


void Drawing::drawChart(Qt::GlobalColor bg_color)
{
    MaeChart.fill(bg_color);
    drawBaseCircle();
    drawLegend(23);

    int lengthOfArrow = int(100 * Values[0].value / SumOfValues * 0.01 * r);
    if(Values[0].value!=0.0)
    drawArrow(lengthOfArrow,Values[0].color_of_val,10,180);


    lengthOfArrow = int(100 * Values[1].value / SumOfValues * 0.01 * r);
    if(Values[1].value!=0.0)
    drawArrow(lengthOfArrow,Values[1].color_of_val,10,60);



    lengthOfArrow = int(100 * Values[2].value / SumOfValues * 0.01 * r);
    if(Values[2].value!=0.0)
    drawArrow(lengthOfArrow,Values[2].color_of_val,10,-60);


    painter.begin(&MaeChart);
    painter.setBrush(Qt::black);
    painter.drawEllipse(center,15,15);
    painter.end();


}

void Drawing::setValue(int which_val,const double &value, Qt::GlobalColor color,const char* name)
{
    Values[which_val].color_of_val=color;
    if(strncmp(name,"",1))
    Values[which_val].name_of_value=name;

    if(value>=0.0)
        Values[which_val].value=value;
    else
        Values[which_val].value=0.0;


        SumOfValues=0.0;
        for (int i=0;i<3;i++)
        {
            SumOfValues+=Values[i].value;
        }

}

