#include <iostream>

int main()
{
	int a = 0, b = 0, t = 0;
	std::cout << "����������������" << std::endl;
	std::cin >> a >> b;
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	std::cout << a << "��" << b << "֮��������У�" << std::endl;
	for (; a <= b; ++a)
		std::cout << a << " ";
	std::cout << std::endl;
	system("pause");
	return 0;
}