#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->gistwidget = new GistWidget();
    this->ui->text_grid_layout->addWidget(this->gistwidget);
    connect(this,&MainWindow::SignalForPrint,this->gistwidget,&GistWidget::SlotSignalToGiveVector);
    connect(this->gistwidget,&GistWidget::SignalGiveVector,this,&MainWindow::SlotPrintVectorFromGistWidget);
    connect(this,&MainWindow::SignalFileNameToSave,this->gistwidget,&GistWidget::SlotToSaveFile);
    connect(this,&MainWindow::SignalPushNum,this->gistwidget,&GistWidget::SlotAddNum);
    connect(this,&MainWindow::SignalErasehNum,this->gistwidget,&GistWidget::SlotEraseNum);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete gistwidget;
}

void MainWindow::ReadJson(std::string& file_name)
{
    this->gistwidget->setDataFromJson(file_name);
}

void MainWindow::ReadJson(QString& q_str_file_name)
{
    std::string str = q_str_file_name.toStdString();
    this->ReadJson(str);
}

void MainWindow::on_openAction_triggered()
{
    QString file_name = QFileDialog::getOpenFileName(0,"Open dialog","","*.json");
    this->ReadJson(file_name);
    emit SignalForPrint();
}

void MainWindow::on_saveHowAction_triggered()
{
    QString file_name = QFileDialog::getSaveFileName(0,"Open dialog","","*.json");
    emit SignalFileNameToSave(file_name);
}

void MainWindow::SlotPrintVectorFromGistWidget(std::vector<int>& data)
{
    QString result = "";
    for(int i = 0;i < data.size(); ++i){
        result += QString::number(data[i]) + "\n";
    }
    this->ui->output_textEdit->setText(result);
}

bool is_number(const std::string& s) {
    return !s.empty() && std::find_if(s.begin(), s.end(),[](const char& c){return !std::isdigit(c);}) == s.end();
}


void MainWindow::on_addButton_clicked()
{
    if(!(this->ui->addLineEdit->text() == "") ){
        if(is_number(this->ui->addLineEdit->text().toStdString())){
            emit SignalPushNum(this->ui->addLineEdit->text().toInt());
        }
        else{
            QMessageBox::information(nullptr, "Mistake", "not number or less than 0");
            qDebug() << "not number or less than 0";
        }
    }

    this->ui->addLineEdit->clear();
}


void MainWindow::on_eraseButton_clicked()
{
    if(!(this->ui->eraseLineEdit->text() == "")){
        if(is_number(this->ui->eraseLineEdit->text().toStdString()))
        {
            if(this->ui->eraseLineEdit->text().toInt() >= 0){
                emit SignalErasehNum(this->ui->eraseLineEdit->text().toInt());
            }
            else{
                QMessageBox::information(nullptr, "Mistake", "less than 0");
                qDebug() << "less than 0";
            }
        }
        else{
            QMessageBox::information(nullptr, "Mistake", "not number or less than 0");
            qDebug() << "not number or less than 0";
        }
    }
    this->ui->eraseLineEdit->clear();
}

