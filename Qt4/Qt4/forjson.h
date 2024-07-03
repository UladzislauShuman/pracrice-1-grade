#ifndef FORJSON_H
#define FORJSON_H
#include <string>
#include <typeinfo>
#include <fstream>
#include <iostream>
#include <QDebug>
#include <QMessageBox>
#include "single_include/nlohmann/json.hpp"

nlohmann::json MakeJson(std::string&);
bool isCorrectExtension(std::string&);
bool isEmpty(std::string&);
bool isCorrectStructure(nlohmann::json&);
#endif // FORJSON_H
