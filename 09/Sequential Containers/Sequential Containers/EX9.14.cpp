#include <iostream>
#include <list>
#include <vector>
#include <iostream>
#include <string>

int main()
{
	std::list<char *> c1(10, "hi");
	std::vector<std::string> c2;
	c2.assign(c1.cbegin(), c1.cend());
	for (std::string c : c2)
		std::cout << c << " ";
	std::cout << std::endl;
	system("pause");
	return 0;
}