#include <sstream>
#include <fstream>
#include <vector>
#include <iostream>

int main()
{
	std::string text_name;
	std::cin >> text_name;
	std::ifstream is(text_name);
	if (is)
	{
		std::vector<std::string> val;
		std::string line;
		while (std::getline(is, line))
			val.push_back(line);
		for (std::vector<std::string>::const_iterator beg = val.cbegin(), end = val.cend(); beg != end; ++beg)
		{
			std::istringstream ws(*beg);
			std::string word;
			while (ws >> word)
				std::cout << word << " ";
		}
		std::cout << std::endl;
		system("pause");
		return 0;
	}
	else
	{
		std::cerr << "No related documents found!" << std::endl;
		system("pause");
		return -1;
	}
}