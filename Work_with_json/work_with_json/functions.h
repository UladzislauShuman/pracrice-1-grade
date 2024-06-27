#pragma once
#include "single_include/nlohmann/json.hpp."
#include <iostream>
#include <filesystem>


void CheckArgumentsAmount(int arguments_amount);
void CheckInputPath(const std::filesystem::path&);
bool IsJsonCorrect(const nlohmann::json& json);
