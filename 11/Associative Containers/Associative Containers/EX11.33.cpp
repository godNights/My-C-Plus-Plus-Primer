#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>

std::map<std::string, std::string> inputTransform(std::ifstream &input)
{
	std::map<std::string, std::string> mapTrans;
	std::string key;
	std::string value;
	while (input >> key && std::getline(input, value))
	{
		std::string realValue = value.substr(1);
		mapTrans[key] = realValue;
	}
	return mapTrans;
}

const std::string &wordTransform(const std::string &s, const std::map<std::string, std::string> &mapTrans)
{
	auto map_find = mapTrans.find(s);
	if (map_find != mapTrans.end())
		return map_find->second;
	else
		return s;
}

void transform(std::ifstream &map_file, std::ifstream &input)
{
	std::map<std::string, std::string> mapRegulation = inputTransform(map_file);
	std::string line;
	while (std::getline(input, line))
	{
		std::string word;
		std::istringstream stream(line);
		bool space = true;
		while (stream >> word)
		{
			if (space)
				space = false;
			else
				std::cout << " ";
			std::cout << wordTransform(word, mapRegulation);
		}
		std::cout << std::endl;
	}
}

int main()
{
	std::ifstream map_txt("map.txt");
	std::ifstream text_txt("text.txt");
	if (map_txt && text_txt)
		transform(map_txt, text_txt);
	else
		std::cerr << "no relative documents found!" << std::endl;
	system("pause");
	return 0;
}