#include <iostream>

int main()
{
	int a, b, t;
	std::cout << "��������������:" << std::endl;
	std::cin >> a >> b;
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	std::cout << a << "��" << b << "֮������������У�" << std::endl;
	while (a <= b)
	{
		std::cout << a << " ";
		++a;
	}
	system("pause");
	return 0;
}