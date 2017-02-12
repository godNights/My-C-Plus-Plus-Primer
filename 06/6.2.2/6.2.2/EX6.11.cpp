#include <iostream>

template <typename T>

void reset(T &a)
{
	a = 0;
}

int main()
{
	double a;
	while (std::cin >> a)
	{
		reset(a);
		std::cout << a << std::endl;
	}
	system("pause");
	return 0;
}