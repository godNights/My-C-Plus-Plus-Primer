#include <iostream>
#include <vector>
#include <list>
#include <iterator>

template <typename sequence>
void print(const sequence &seq)
{
	for (auto s : seq)
		std::cout << s << " ";
	std::cout << std::endl;
}
int main()
{
	std::vector<int> number{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::list<int> listInserter, listBackInserter, listFrontInserter;
	std::copy(number.cbegin(), number.cend(), std::inserter(listInserter, listInserter.begin()));
	std::copy(number.cbegin(), number.cend(), std::front_inserter(listFrontInserter));
	std::copy(number.cbegin(), number.cend(), std::back_inserter(listBackInserter));
	std::cout << "inserter : ";
	print(listInserter);
	std::cout << "frontInserter : ";
	print(listFrontInserter);
	std::cout << "backInserter : ";
	print(listBackInserter);
	system("pause");
	return 0;
}