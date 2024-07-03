#include "functions.h"
#include <iostream>
#include <fstream>
#include <filesystem>
#include <vector>

int main(int argc, char* argv[])
{
	std::ifstream in("input.json");
	nlohmann::json file = nlohmann::json::parse(in);
	in.close();

	std::vector<int> vec;
	for (nlohmann::json::iterator it = file.begin(); it != file.end(); ++it)
	{
		vec.push_back(*it);
	}
	return 0;
}