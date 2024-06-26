#ifndef GISTWIDGET_H
#define GISTWIDGET_H

#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

#include <QTimer>
#include <QPainter>
#include <QLineF>
#include <QString>
#include <QWidget>
#include <QObject>

#include "MyList.h"
#include "MyStack.h"
#include <QObject>
#include <QWidget>

class GistWidget : public QWidget
{
    Q_OBJECT
public:
    GistWidget();
    ~GistWidget();
    //QWidget* GetWidget(){return widget;}
public slots:
    void SlotPush(int);
    void SlotPop();
signals:
    void SignalAfterPop(int);
protected:
    void paintEvent(QPaintEvent* event);
private:
    MyStack* data;
    QPen* pen;
    QColor color;
    QPoint* penPosition;
    //QWidget* widget;
};

#endif // GISTWIDGET_H
