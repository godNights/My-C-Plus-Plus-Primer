#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vecInt{ 0, 1, 2, 3, 4, 5, 6 };
	for (std::vector<int>::const_reverse_iterator rbeg = vecInt.crbegin(); rbeg != vecInt.crend(); ++rbeg)
		std::cout << *rbeg << " ";
	std::cout << std::endl;
	system("pause");
	return 0;
}