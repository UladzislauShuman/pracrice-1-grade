#include "forjson.h"



bool isCorrectExtension(std::string &file_name)
{
    int dote = file_name.find_last_of(".");
    return file_name.substr(dote+1) == "json";
}

bool isEmpty(std::string& file_name)
{
    return file_name.empty();
}

bool isCorrectStructure(nlohmann::json& json_)
{
    if(json_.is_array())
    {
        if(!json_.empty())
        {
            for (nlohmann::json::iterator it = json_.begin(); it != json_.end(); ++it)
            {
                if(!it->is_number_integer()){
                    QMessageBox::information(nullptr, "Mistake", ".json has not only _int_ elements");
                    qDebug() << ".json has not only _int_ elements";
                    return false;
                }
                else{
                    if(*it < 0){
                        QMessageBox::information(nullptr, "Mistake", ".json has less than 0 elements");
                        qDebug() << ".json has less than 0 elements";
                        return false;
                    }
                }
            }
        }
        else{
            QMessageBox::information(nullptr, "Mistake", ".json is empty");
            qDebug() <<  ".json is empty";
            return false;
        }
    }
    else{
        QMessageBox::information(nullptr, "Mistake", ".json is not correct(it is not array");
        qDebug() << ".json is not correct(it is not array)";
        return false;
    }
    return true;
}

nlohmann::json MakeJson(std::string& file_name)
{
    if(!isEmpty(file_name))
    {
        if(isCorrectExtension(file_name))
        {
            std::ifstream in(file_name);
            if(in.is_open())
            {
                nlohmann::json file = nlohmann::json::parse(in);
                in.close();
                if(isCorrectStructure(file))
                {
                    return file;
                }
                else{
                    QMessageBox::information(nullptr, "Mistake", "problem with structure");
                    qDebug() <<  "problem with structure";
                }
            }
            else{
                QMessageBox::information(nullptr, "Mistake", "cannot open");
                qDebug() <<  "cannot open";
            }
        }
        else{
            QMessageBox::information(nullptr, "Mistake", "it is not .json file");
            qDebug() <<  "it is not .json file";
        }
    }
    else{
        QMessageBox::information(nullptr, "Mistake", "is empty file name");
        qDebug() << "is empty file name";
    }
    nlohmann::json Empty;
    return Empty;
}
