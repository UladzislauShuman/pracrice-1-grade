#ifndef GISTOGRAMMA_H
#define GISTOGRAMMA_H

#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

#include <QTimer>
#include <QPainter>
#include <QLineF>
#include <QString>
#include <QWidget>

class gistogramma : QWidget
{

public:
    gistogramma();
    ~gistogramma();
    QWidget* GetWidget(){return widget;}
public slots:
    void SlotPush(int);
    void SlotPop();
signals:
    void SignalAfterPop(int);
protected:
    void paintEvent(QPaintEvent*);
private:
    std::vector<int> data;
    QPen* pen;
    QColor color;
    QPoint* penPosition;
    QWidget* widget;
};

#endif // GISTOGRAMMA_H
