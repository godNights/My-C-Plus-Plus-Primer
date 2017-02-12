#include <iostream>

int main()
{
	int a = 0, b = 0, t = 0;
	std::cout << "请输入两个整数：" << std::endl;
	std::cin >> a >> b;
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	std::cout << a << "与" << b << "之间的整数有：" << std::endl;
	for (; a <= b; ++a)
		std::cout << a << " ";
	std::cout << std::endl;
	system("pause");
	return 0;
}