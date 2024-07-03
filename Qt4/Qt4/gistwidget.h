#ifndef GISTWIDGET_H
#define GISTWIDGET_H

#include <vector>
#include <string>
#include <fstream>
#include <filesystem>
#include <algorithm>
#include "single_include/nlohmann/json.hpp"
#include "forjson.h"

#include <QTimer>
#include <QPainter>
#include <QLineF>
#include <QString>
#include <QWidget>
#include <QObject>

#include <QObject>
#include <QWidget>
#include <QMessageBox>

class GistWidget : public QWidget
{
    Q_OBJECT
public:
    GistWidget();
    ~GistWidget();
    void setData(std::vector<int>&);
    void setDataFromJson(std::string&);
public slots:
    void SlotSignalToGiveVector();
    void SlotToSaveFile(QString&);
    void SlotAddNum(int);
    void SlotEraseNum(int);
signals:
    void SignalGiveVector(std::vector<int>&);
protected:
    void paintEvent(QPaintEvent* event);
private:
    std::vector<int> data;
    QPen* pen;
    QColor color;
    QPoint* penPosition;
};

void ReadFile(std::vector<int>&,const std::string&);
#endif // GISTWIDGET_H
