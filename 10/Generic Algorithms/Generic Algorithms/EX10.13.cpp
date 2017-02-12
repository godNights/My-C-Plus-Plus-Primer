#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

bool isThanFive(const std::string &s)
{
	return s.size() >= 5;
}

std::vector<std::string>::iterator division(std::vector<std::string> &val)
{
	auto end_part = std::partition(val.begin(), val.end(), isThanFive);
	return end_part;
}

void print(const std::vector<std::string> &val)
{
	for (auto s : val)
		std::cout << s << " ";
	std::cout << std::endl;
}


int main()
{
	std::vector<std::string> val;
	std::string s;
	while (std::cin >> s)
		val.push_back(s);
	print(val);
	auto end_part = division(val);
	std::vector<std::string> vpart(val.begin(), end_part);
	print(val);
	print(vpart);
	system("pause");
	return 0;
}