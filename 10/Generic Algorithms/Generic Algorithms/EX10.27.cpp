#include <iostream>
#include <list>
#include <vector>
#include <iterator>
#include <algorithm>

int main()
{
	std::vector<int> vecInt{ 0, 1, 3, 3, 5, 6, 0, 1, 3, 2, 4, 7, 20, 0, -1, -1 };
	std::list<int> listInt;
	std::unique_copy(vecInt.cbegin(), vecInt.cend(), std::back_inserter(listInt));
	for (auto l : listInt)
		std::cout << l << " ";
	std::cout << std::endl;
	system("pause");
	return 0;
}