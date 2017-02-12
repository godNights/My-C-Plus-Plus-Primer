#include <sstream>
#include <vector>
#include <string>
#include <iostream>

struct personInfo
{
	std::string name;
	std::vector<std::string> phone;
};

int main()
{
	std::vector<personInfo> person, prePeoson;
	std::string line, word, preWord;
	std::istringstream record;
	while (std::getline(std::cin, line))
	{
		bool b = true;
		personInfo info;
		record.clear();  // Çå¿Õµ±Ç°×´Ì¬
		record.str(line);
		record >> info.name;
		for (auto &w : person)
		{
			if (info.name == w.name)
			{
				b = false;
				while (record >> word)
					w.phone.push_back(word);
				break;
			}
		}
		if(b)
		{
			while (record >> word)
				info.phone.push_back(word);
			person.push_back(info);
		}
	}
	for (auto c : person)
	{
		std::cout << c.name << " ";
		for (auto a : c.phone)
			std::cout << a << " ";
		std::cout << std::endl;
	}
	system("pause");
	return 0;
}