#include <iostream>
#include <fstream>
#include "TextQuery.h"

int main()
{
	TextQuery text;
	std::string word;
	while (std::cin >> word)
	{
		std::ifstream is("test.txt");
		text.printTotal(is, word);
	}
	system("pause");
	return 0;
}