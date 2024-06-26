#include "gistogramma.h"

gistogramma::gistogramma()
{
    pen = new QPen();
    penPosition = new QPoint(0,0);
    pen->setColor(Qt::black);
    widget = new QWidget();
}

gistogramma::~gistogramma()
{
    delete pen;
    delete penPosition;
    delete widget;
}

void gistogramma::SlotPush(int num)
{
    this->widget->update();
}

void gistogramma::SlotPop()
{
    this->widget->update();
    emit SignalAfterPop(1);
}

void gistogramma::paintEvent(QPaintEvent* event)
{
    if(this->data.empty())
        return;

    double y0;
    double k = (double)(widget->width())/(*std::max_element(this->data.begin(),this->data.end()));
    int penWidth = (widget->height())/(this->data.size());
    pen->setWidth(penWidth);

    QPainter painter(widget);
    painter.begin(widget);
    painter.setPen(*pen);

    y0 = penWidth / 2;
    for(int i = 0; i < this->data.size();++i){
        painter.drawLine(0,y0,this->data[i]*k,y0);
        y0 += penWidth;
    }

    painter.end();
}


