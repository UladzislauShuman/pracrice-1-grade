#include "functions.h"
#include <fstream>

void CheckArgumentsAmount(int arguments_amount)
{
    const int required_arguments = 1; // Здесь укажите требуемое количество аргументов
    if (arguments_amount != required_arguments) {
        throw std::invalid_argument("Invalid command line arguments amount: current - " +
            std::to_string(arguments_amount) + 
            ", required - " + std::to_string(required_arguments));
    }
}


void CheckInputPath(const std::filesystem::path& path_to_filesystem_object)
{
    //существует ли
    if (!std::filesystem::exists(path_to_filesystem_object)) {
        throw std::invalid_argument("Filesystem object by path " +
            path_to_filesystem_object.filename().string() +
            "is not exists!");
    }
    //файл обычный ли
    if (!std::filesystem::is_regular_file(path_to_filesystem_object)) {
        throw std::invalid_argument("Filesystem object by path " +
            path_to_filesystem_object.filename().string() +
            "is not a regular file!");
    }
    if (!path_to_filesystem_object.has_extension() or path_to_filesystem_object.extension().string() != ".json") {
        throw std::invalid_argument("Filesystem object by path " +
            path_to_filesystem_object.filename().string() +
            "invalid extension!");
    }
}

bool IsJsonCorrect(const nlohmann::json& json)
{
    if (!json.is_object()) {
        return false;
    }
    if (!json.contains("string") or !json["string"].is_string()) {
        return false;
    }
    if (!json.contains("empty") or !json["empty"].is_null()) {
        return false;
    }
    if (!json.contains("array") or !json["array"].is_array()) {
        return false;
    }
    if (json["array"].size() != 3) {
        return false;
    }
    if (!json["array"][0].is_boolean() or !json["array"][1].is_number() ||
        !json["array"][2].is_object()) {
        return false;
    }
    if (!json.contains("number") or !json["number"].is_number()) {
        return false;
    }
    if (!json.contains("object") or !json["object"].is_null()) {
        return false;
    }
    return true;
}
