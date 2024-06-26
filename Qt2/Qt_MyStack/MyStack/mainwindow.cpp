#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    field = new GistWidget();
    connect(field,&GistWidget::SignalAfterPop,this,&MainWindow::SlotAfterPop);
    connect(this,&MainWindow::SignalPush,field,&GistWidget::SlotPush);
    connect(this,&MainWindow::SignalPop,field,&GistWidget::SlotPop);
    this->ui->gridLayout->addWidget(field);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete field;
}

void MainWindow::SlotAfterPop(int pop_num)
{
    if(pop_num == -1){
        this->ui->popEdit->clear();
    }
    else{
        this->ui->popEdit->setText(QString::number(pop_num));
    }
}

void MainWindow::on_pushButton_clicked()
{
    if(!this->ui->pushEdit->text().isEmpty()){
        emit SignalPush(this->ui->pushEdit->text().toInt());
    }
    this->ui->pushEdit->clear();
}

void MainWindow::on_popButton_clicked()
{
    emit SignalPop();
}

