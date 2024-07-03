#include "gistwidget.h"

GistWidget::GistWidget()
{
    pen = new QPen();
    color = Qt::black;
    penPosition = new QPoint(0,0);
    pen->setColor(color);
    this->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
}

GistWidget::~GistWidget()
{
    delete pen;
    delete penPosition;
}

void ReadFile(std::vector<int>& data_,const std::string& fileName)
{
    std::ifstream fin(fileName);
    int tempNum;
    while(fin >> tempNum)
        data_.push_back(tempNum);
}

void GistWidget::paintEvent(QPaintEvent *)
{
    if(this->data.empty())
        return;

    double y0;
    double k = (double)(this->width())/(*std::max_element(this->data.begin(),this->data.end()));
    int penWidth = (this->height())/(this->data.size());
    pen->setWidth(penWidth);

    QPainter painter(this);
    painter.begin(this);
    painter.setPen(*pen);

    y0 = penWidth / 2;
    for(int i = 0; i < this->data.size();++i){
        painter.drawLine(0,y0,this->data[i]*k,y0);
        y0 += penWidth;
    }

    painter.end();
}

void GistWidget::setData(std::vector<int>& data_)
{
    this->data = data_;
    this->update();
}

void GistWidget::setDataFromJson(std::string& file_name)
{
    nlohmann::json file = MakeJson(file_name);
    if(!file.empty())
    {
        this->data.clear();
        for (nlohmann::json::iterator it = file.begin(); it != file.end(); ++it)
        {
            this->data.push_back(*it);
        }
        this->update();
    }
    else{
        QMessageBox::information(nullptr, "Mistake", "file is Empty or has problems");
        qDebug() << "file is Empty or has problems";
    }

}

void GistWidget::SlotSignalToGiveVector()
{
    emit SignalGiveVector(data);
}

void GistWidget::SlotToSaveFile(QString& file_name)
{
    std::ofstream out(file_name.toStdString());
    out << "[";
    for (int i = 0; i < this->data.size(); ++i){
        if(i != this->data.size() - 1){
            out << this->data[i] <<", ";
        }
        else{
            out << this->data[i];
        }
    }
    out << "]";
    out.close();
}

void GistWidget::SlotAddNum(int num)
{
    this->data.push_back(num);
    this->update();
    emit SignalGiveVector(this->data);
}

void GistWidget::SlotEraseNum(int index)
{
    if(index >= 0 and index < this->data.size()){
        this->data.erase(this->data.begin() + index);
        this->update();
        emit SignalGiveVector(this->data);
    }
    else{
        QMessageBox::information(nullptr, "Mistake", "bad index");
        qDebug() << "bad index";
    }

}
