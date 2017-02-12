#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vecInt{ 0, 1, 2, 3, 4, 5, 6, 7 };
	//不能访问 begin()前的迭代器，否则会报错
	for (std::vector<int>::const_iterator rbeg = vecInt.cend(); std::distance(vecInt.cbegin(), rbeg) > 0;)
	{
		--rbeg;
		std::cout << *rbeg << " ";
	}
	std::cout << std::endl;
	system("pause");
	return 0;
}


