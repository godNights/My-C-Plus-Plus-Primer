#include <iostream>

int main()
{
	int sum = 0;
	for (int a = 50; a <= 100; ++a)
	{
		sum += a;
	}
	std::cout << sum << std::endl;
	system("pause");
	return 0;
}