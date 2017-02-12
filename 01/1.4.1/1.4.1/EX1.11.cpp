#include <iostream>

int main()
{
	int a, b, t;
	std::cout << "请输入两个整数:" << std::endl;
	std::cin >> a >> b;
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	std::cout << a << "和" << b << "之间的所有整数有：" << std::endl;
	while (a <= b)
	{
		std::cout << a << " ";
		++a;
	}
	system("pause");
	return 0;
}