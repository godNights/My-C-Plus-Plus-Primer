#include <sstream>
#include <string>
#include <iostream>

std::istream &func(std::istream &is)
{
	std::string s;
	while (is >> s)
		std::cout << s << std::endl;
	is.clear();
	return is;
}

int  main()
{
	std::istringstream is("a");
	func(is);
	system("pause");
	return 0;
}