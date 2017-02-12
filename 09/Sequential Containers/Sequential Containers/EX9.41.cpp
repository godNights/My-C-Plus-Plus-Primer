#include <vector>
#include <string>
#include <iostream>

int main()
{
	std::vector<char> vc;
	char c;
	while (std::cin >> c)
		vc.push_back(c);
	std::string s(vc.cbegin(), vc.cend());
	std::cout << s << std::endl;
	system("pause");
	return 0;
}