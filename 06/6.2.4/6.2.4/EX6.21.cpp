#include <iostream>

void swap(int &a, int *b)
{
	int t;
	t = a;
	a = *b;
	*b = t;
}

int main()
{
	int a, b;
	std::cin >> a >> b;
	swap(a, &b);
	std::cout << a << " " << b << std::endl;
	system("pause");
	return 0;
}