#include <iostream>
#include <vector>

std::vector<int> *dynamic()
{
	std::vector<int> *dy = new std::vector<int>();
	return dy;
}

void cin(std::vector<int> *dy)
{
	int a;
	while (std::cin >> a)
		dy->push_back(a);
}

void print(std::vector<int> *dy)
{
	for (auto d : *dy)
		std::cout << d << " ";
	std::cout << std::endl;
	delete dy;
}

int main()
{
	std::vector<int> *ptr = dynamic();
	cin(ptr);
	print(ptr);
	system("pause");
	return 0;
}