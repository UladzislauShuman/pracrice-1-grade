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

/*
В случае
некорректности пути необходимо сгенерировать исключение
std::invalid_argument, содержащее соответствующее сообщение:
«Filesystem object by path указать путь is not exists!», либо
«Filesystem object by path указать путь is not a regular file!»,
либо «Filesystem object by path указать путь has invalid
extension!». Использовать:
− функцию std::filesystem::exists;
− функцию std::filesystem::is_regular_file;
− метод has_extension класса std::filesystem::path;
− метод extension класса std::filesystem::path.
*/
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
    return true;
}