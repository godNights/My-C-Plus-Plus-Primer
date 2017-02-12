#include <list>
#include <iostream>
#include <string>

int main()
{
	std::string s;
	std::list<std::string> de;
	while (std::cin >> s)
	{
		de.push_back(s);
	}
	for (std::list<std::string>::const_iterator beg = de.cbegin(), end = de.cend(); beg != end; ++beg)
	{
		std::cout << *beg << std::endl;
	}
	system("pause");
	return 0;
}