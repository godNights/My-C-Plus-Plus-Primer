#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::vector<int> v1, v2;
	std::list<int> l;
	int a;
	char c;
	while (std::cin >> a && (c = getchar()) != '\n')
		v1.push_back(a);
	while (std::cin >> a && (c = getchar()) != '\n')
		l.push_back(a);
	v2.assign(l.cbegin(), l.cend());
	if (v1 == v2)
		std::cout << "equal" << std::endl;
	else
		std::cout << "not equal" << std::endl;
	system("pause");
	return 0;
}