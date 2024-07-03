#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "single_include/nlohmann/json.hpp"
#include "gistwidget.h"

#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QMessageBox>

#include <vector>
#include <fstream>
#include <filesystem>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void ReadJson(std::string&);
    void ReadJson(QString&);

public slots:
    void SlotPrintVectorFromGistWidget(std::vector<int>&);
signals:
    void SignalForPrint();
    void SignalPushNum(int);
    void SignalErasehNum(int);
    void SignalFileNameToSave(QString&);
private slots:
    void on_openAction_triggered();

    void on_saveHowAction_triggered();

    void on_addButton_clicked();

    void on_eraseButton_clicked();

private:
    Ui::MainWindow *ui;
    GistWidget* gistwidget;
};
#endif // MAINWINDOW_H
