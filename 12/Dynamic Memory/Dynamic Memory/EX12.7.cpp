#include <iostream>
#include <vector>
#include <memory>

std::shared_ptr<std::vector<int>> dynamic()
{
	return std::make_shared<std::vector<int>>();
}

void cin(std::shared_ptr<std::vector<int>> ptr)
{
	int a;
	while (std::cin >> a)
		ptr->push_back(a);
}

void print(std::shared_ptr<std::vector<int>> ptr)
{
	for (int p : *ptr)
		std::cout << p << " ";
	std::cout << std::endl;
}

int main()
{
	std::shared_ptr<std::vector<int>> ptr = dynamic();
	cin(ptr);
	print(ptr);
	system("pause");
	return 0;
}