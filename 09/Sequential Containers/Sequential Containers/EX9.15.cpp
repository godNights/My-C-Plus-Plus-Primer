#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v1, v2;
	int a;
	char c;
	while (std::cin >> a && (c = getchar()) != '\n')
		v1.push_back(a);
	while (std::cin >> a && (c = getchar()) != '\n')
		v2.push_back(a);
	if (v1 == v2)
		std::cout << "equal" << std::endl;
	else
		std::cout << "not equal" << std::endl;
	system("pause");
	return 0;
}