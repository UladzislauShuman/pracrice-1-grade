#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "gistogramma.h"
#include <QMainWindow>
#include "gistwidget.h"

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
public slots:
    void SlotAfterPop(int);
signals:
    void SignalPush(int);
    void SignalPop();
private slots:
    void on_pushButton_clicked();
    void on_popButton_clicked();

private:
    Ui::MainWindow *ui;
    GistWidget* field;
};
#endif // MAINWINDOW_H
