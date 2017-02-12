#include <iostream>
#include <vector>

int func(int a, int b);

int add(int a, int b)
{
	return a + b;
}

int divide(int a, int b)
{
	return a / b;
}

int multiply(int a, int b)
{
	return a * b;
}

int subtract(int a, int b)
{
	return a - b;
}

int main()
{
	std::vector<decltype(func) *> a{ add, subtract, multiply, divide };
	for (auto c : a)
		std::cout << c(2,10) << " ";
	std::cout << std::endl;
	system("pause");
	return 0;
}