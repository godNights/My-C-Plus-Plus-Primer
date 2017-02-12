#include <string>
#include <list>
#include <algorithm>
#include <iostream>

int main()
{
	int number;
	char c;
	std::string s1, s2;
	std::list<std::string> ls;
	while (std::cin >> s1 && (c = getchar()) != '\n')
		ls.push_back(s1);
	ls.push_back(s1);
	std::cin >> s2;
	number = std::count(ls.cbegin(), ls.cend(), s2);
	if (number == 0)
		std::cout << s2 << " did not appear " << std::endl;
	else
		std::cout << s2 << " appeared " << number << " times " << std::endl;
	system("pause");
	return 0;
}