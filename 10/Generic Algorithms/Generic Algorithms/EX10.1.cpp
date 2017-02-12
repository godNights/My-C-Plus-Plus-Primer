#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int a, b, number;
	std::vector<int> v;
	char c;
	while (std::cin >> a && (c = getchar()) != '\n')
	{
		v.push_back(a);
	}
	v.push_back(a);
	std::cin >> b;
	number = std::count(v.cbegin(), v.cend(), b);
	if (number != 0)
		std::cout << b << " appeared " << number << " times " << std::endl;
	else
		std::cout << b << " did not appear " << std::endl;
	system("pause");
	return 0;
}