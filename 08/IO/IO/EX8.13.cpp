#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cctype>
#include <vector>
#include <stdexcept>

bool valid(const std::string &s)
{
	if (s.length() <= 6)
		return false;
	for (auto c : s)
	{
		if (!std::isdigit(c))	//std::isdigit(c)保存在头文件 cctype 中，用于判断字符c是否为数字，当c为数字0-9时，返回非零值，否则返回零。
			return false;
	}
	return true;
}

std::string format(const std::string &s)
{
	return s.substr(0, 3) + "-" + s.substr(3, 3) + "-" + s.substr(6);
}

struct personInfo
{
	std::string name;
	std::vector<std::string> phone;
};

void trans(std::vector<personInfo> &person, std::ifstream &input)
{
	std::string word, line;
	while (std::getline(input, line))
	{
		bool b = true;
		personInfo info;
		std::istringstream record(line);
		record >> info.name;
		for (auto &c : person)
		{
			if (c.name == info.name)
			{
				while (record >> word)
					c.phone.push_back(word);
				b = false;
				break;
			}
		}
		if (b)
		{
			while (record >> word)
				info.phone.push_back(word);
			person.push_back(info);
		}
	}
}

int  main()
{
	std::string textName;
	std::cout << "please enter the filename:" << std::endl;
	while (std::cin >> textName)
	{
		try
		{
			std::ifstream input(textName);
			if (!input)
				throw std::runtime_error("No related documents found!");
			std::vector<personInfo> person;
			trans(person, input);
			std::vector<std::string> errorString, trueString;
			std::ostringstream errorData, trueData;
			for (const auto &entry : person)
			{
				errorData.clear();
				trueData.clear();
				for (const auto &number : entry.phone)
				{
					if (valid(number))
						trueData << format(number) << " ";
					else
						errorData << number << " ";
				}
				if (!trueData.str().empty())
				{
					std::string s = entry.name + " " + trueData.str();
					trueString.push_back(s);
				}
				if (!errorData.str().empty())
				{
					std::string s = entry.name + " " + errorData.str();
					errorString.push_back(s);
				}
			}
			if (!trueString.empty())
			{
				std::cout << "The correct phone numbers are included below:" << std::endl;
				for (auto s : trueString)
					std::cout << s << std::endl;
			}
			if (!errorString.empty())
			{
				std::cout << "Incorrect phone numbers are included below:" << std::endl;
				for (auto s : errorString)
					std::cout << s << std::endl;
			}
			char c;
			std::cout << "If you want to end the input,please enter no" << std::endl;
			std::cin >> c;
			if (!std::cin || tolower(c) == 'n')
				break;
			std::cout << "please enter the filename:" << std::endl;
		}
		catch (std::runtime_error err)
		{
			std::cout << err.what() << std::endl;
			char c;
			std::cout << "If you want to end the input,please enter no" << std::endl;
			std::cin >> c;
			if (!std::cin || tolower(c) == 'n')
				break;
			std::cout << "please enter the filename:" << std::endl;
		}
	}
	system("pause");
	return 0;
}