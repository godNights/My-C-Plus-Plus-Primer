#include "TextQueryReal.h"
#include <fstream>

int main()
{
	std::ifstream is("test.txt");
	TextQuery tq(is);
	while (true)
	{
		std::cout << "enter word to look for, or q to quit: " << std::endl;
		std::string word;
		if (!(std::cin >> word) || word == "q")
			break;
		print(std::cout, tq.query(word)) << std::endl;
	}
	return 0;
}