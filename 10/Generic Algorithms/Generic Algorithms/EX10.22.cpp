#include <iostream>
#include <algorithm>
#include <string>
#include <functional>
#include <vector>

bool lessThanNumber(const std::string &s, std::string::size_type sz)
{
	return s.size() <= sz;
}

int main()
{
	std::string s;
	char c;
	signed number = 0;
	std::cin.tie(&std::cout);
	while (std::cin >> number)
	{
		std::vector<std::string> vecString;
		while ((std::cin >> s) && (c = getchar()) != '\n')
			vecString.push_back(s);
		vecString.push_back(s);
		signed count = std::count_if(vecString.begin(), vecString.end(), std::bind(lessThanNumber, std::placeholders::_1, number));
		std::cout << count << std::endl;
	}
	system("pause");
	return 0;
}