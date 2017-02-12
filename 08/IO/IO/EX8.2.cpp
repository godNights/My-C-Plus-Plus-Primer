#include <iostream>
#include <string>

std::istream &func(std::istream &is)
{
	std::string val;
	while (is >> val)
		std::cout << val;
	is.clear();
	return is;
}

int main()
{
	func(std::cin);
	system("pause");
	return 0;
}