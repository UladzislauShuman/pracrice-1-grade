#include "functions.h"
#include <iostream>
#include <filesystem>


int main(int argc, char* argv[])
{
	std::filesystem::path path_(R"(input.json)");
	std::cout << path_;
	return 0;
}