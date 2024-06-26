#include "gistwidget.h"

GistWidget::GistWidget()
{
    data = new MyStack();
    pen = new QPen();
    color = Qt::black;
    penPosition = new QPoint(0,0);
    pen->setColor(color);
    //widget = new QWidget();
}

GistWidget::~GistWidget()
{
    delete data;
    delete pen;
    delete penPosition;
    //delete widget;
}

void GistWidget::SlotPush(int num)
{
    this->data->push(num);
    this->update();
}

void GistWidget::SlotPop()
{
    if(!this->data->empty()){
        emit SignalAfterPop(this->data->pop());
    }
    else{
        emit SignalAfterPop(-1);
    }
    this->update();
}

void GistWidget::paintEvent(QPaintEvent *)
{
    if(this->data->empty())
        return;

    double y0;
    double k = (double)(this->width())/(data->maxElement());
    int penWidth = (this->height())/(this->data->size());
    pen->setWidth(penWidth);

    QPainter painter(this);
    painter.begin(this);
    painter.setPen(*pen);

    y0 = penWidth / 2;
    for (MyList::Iterator it = data->List()->Begin(); /*it.GetPtr()->next != nullptr*/; it++)
    {
        if(it.GetPtr()->next == nullptr){
            painter.drawLine(0,y0,it.GetPtr()->data*k,y0);
            y0 += penWidth;
            break;
        }
        painter.drawLine(0,y0,it.GetPtr()->data*k,y0);
        y0 += penWidth;
    }

    painter.end();
}
