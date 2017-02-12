#include <deque>
#include <iostream>
#include <string>

int main()
{
	std::string s;
	std::deque<std::string> de;
	while (std::cin >> s)
	{
		de.push_back(s);
	}
	for (std::deque<std::string>::const_iterator beg = de.cbegin(), end = de.cend(); beg != end; ++beg)
	{
		std::cout << *beg << std::endl;
	}
	system("pause");
	return 0;
}