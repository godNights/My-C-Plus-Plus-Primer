#include <iostream>

void print(const char *c)
{
	if (c)
		while (*c)
			std::cout << *c++ << " ";
	std::cout << std::endl;
}

void print(const int *beg, const int *end)
{
	while (beg != end)
		std::cout << *beg++ << " ";
	std::cout << std::endl;
}

void print(const int a)
{
		std::cout << a << std::endl;
}

void print(const int ia[], const size_t t)
{
	for (int i = 0; i != t; ++i)
		std::cout << ia[i] << " ";
	std::cout << std::endl;
}

void print(const int(&array)[2])
{
	for (auto i : array)
		std::cout << i << " ";
	std::cout << std::endl;
}

int main()
{
	int i = 0, j[2] = { 0, 1 };
	char ch[] = "hello";
	print(ch);
	print(std::begin(j), std::end(j));
	print(i);
	print(j, std::end(j) - std::begin(j));
	print(j);
	system("pause");
	return 0;

}