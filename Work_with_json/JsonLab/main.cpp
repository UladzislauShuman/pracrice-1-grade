#include "functions.h"
#include <iostream>
#include <fstream>
#include <filesystem>


int main(int argc, char* argv[])
{
	try {
		CheckArgumentsAmount(argc);
		std::filesystem::path path_(R"(input.json)");
		CheckInputPath(path_);

		std::ifstream file(path_);
		nlohmann::json json;
		//file >> json;
		json = nlohmann::json::parse(file);
		file.close();

		if (IsJsonCorrect(json)) {
			std::cout << "Structure of JSON-file by path "
				<< path_.string() << " is correct." << std::endl;
		}
		else {
			std::cout << "Structure of JSON-file by path "
				<< path_.string() << " is incorrect."
				<< std::endl;
		}
	}
	catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return 1;
	}
	return 0;
}