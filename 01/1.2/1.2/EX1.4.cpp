#include <iostream>

int main()
{
	double a, b;
	std::cout << "请输入两个数:" << std::endl;
	std::cin >> a >> b;
	std::cout << a << "与" << b << "两数的积为：" << (a*b) << std::endl;
	system("pause");
	return 0;
}