#include <iostream>

template <typename T>

void swap(T &a, T &b)
{
	T s;
	s = a;
	a = b;
	b = s;
}

int main()
{
	double a, b;
	while (std::cin >> a >> b)
	{
		swap(a, b);
		std::cout << a << " " << b << std::endl;
	}
	system("pause");
	return 0;
}