#include <vector>
#include <list>
#include <iostream>
#include <iterator>

int main()
{
	std::vector<int> vecInt{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::list<int> listInt;
	std::copy(vecInt.crbegin() + 2, vecInt.crbegin() + 7, std::back_inserter(listInt));
	for (int c : listInt)
		std::cout << c << " ";
	std::cout << std::endl;
	system("pause");
	return 0;
}