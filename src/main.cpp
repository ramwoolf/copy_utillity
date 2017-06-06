#include <iostream>
#include <fstream>

void printHelpPage();

int main(int argc, char const *argv[])
{
	if (argc < 2)
	{
		printHelpPage();
		return 0;
	}

	std::ifstream source(argv[1], std::ios::binary);
	std::ofstream dest(argv[2], std::ios::binary);

	dest << source.rdbuf();

	return 0;
}

void printHelpPage()
{
	std::cout << "Print Help Page" << std::endl;
}