#include <iostream>
#include <fstream>

#include "../include/FileCopy.h"

void printHelpPage();

int main(int argc, char const *argv[])
{
	if (argc < 2)
	{
		printHelpPage();
		return 0;
	}

	// std::ifstream source(argv[1], std::ios::binary);
	// std::ofstream dest(argv[2], std::ios::binary);

	// dest << source.rdbuf();

	FileCopy fileCopy;
	auto copiedSize = fileCopy(argv[1], argv[2]);
	std::cout << "Copied " << copiedSize << " bytes" << std::endl;

	return 0;
}

void printHelpPage()
{
	std::cout << "Print Help Page" << std::endl;
}