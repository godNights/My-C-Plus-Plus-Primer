#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

void biggies(std::vector<std::string> val, std::vector<std::string>::size_type sz)
{
	std::stable_sort(val.begin(), val.end(), [](const std::string &s1, const std::string &s2) { return s1.size() < s2.size(); });
	std::vector<std::string>::iterator end_unique = std::unique(val.begin(), val.end());
	val.erase(end_unique, val.end());
	std::vector<std::string>::iterator beg_number = std::find_if(val.begin(), val.end(), [sz](const std::string &s)
	{ return s.size() >= sz; });
	std::for_each(beg_number, val.end(), [](const std::string &s) { std::cout << s << " "; });
	std::cout << std::endl;
}

void print(const std::vector<std::string> &val)
{
	for (std::string s : val)
		std::cout << s << " ";
	std::cout << std::endl;
}

int main()
{
	std::vector<std::string> val;
	std::string s;
	std::vector<std::string>::size_type sz;
	std::cin >> sz;
	while (std::cin >> s)
		val.push_back(s);
	print(val);
	biggies(val, sz);
	system("pause");
	return 0;
}