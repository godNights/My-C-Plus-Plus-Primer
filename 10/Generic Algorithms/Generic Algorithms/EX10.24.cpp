#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

bool check_size(const std::string &s, std::string::size_type i)
{
	return i > s.size();
}

int main()
{
	std::vector<std::string::size_type> vecI = { 0, 3, 5, 7, 6, 8, 10 };
	std::string s;
	while (std::cin >> s)
	{
		std::vector<std::string::size_type>::iterator number= std::find_if(vecI.begin(), vecI.end(), std::bind(check_size, s, std::placeholders::_1));
		if (number != vecI.end())
			std::cout << *number << std::endl;
		else
			std::cout << "Did no find than " << s << " length of the number" << std::endl;
	}
	system("pause");
	return 0;
}