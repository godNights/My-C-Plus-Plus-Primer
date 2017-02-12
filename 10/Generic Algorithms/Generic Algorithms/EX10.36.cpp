#include <list>
#include <iostream>

template<typename container>

void print(const container &con)
{
	for (auto c : con)
		std::cout << c << " ";
	std::cout << std::endl;
}

int main()
{
	std::list<int> listInt;
	int a;
	while (std::cin >> a)
		listInt.push_back(a);
	print(listInt);
	std::list<int>::const_reverse_iterator endNumber = std::find(listInt.crbegin(), listInt.crend(), 0);
	int number = std::distance(listInt.cbegin(), endNumber.base());
	std::cout << number << " " << *endNumber << std::endl;
	system("pause");
	return 0;
}

