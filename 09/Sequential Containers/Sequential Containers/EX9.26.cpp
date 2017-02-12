#include <iostream>
#include <list>
#include <array>
#include <vector>

int main()
{
	std::array<int, 11> ia = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
	std::list<int> eraseOdd;
	std::vector<int> eraseEven;
	eraseOdd.assign(ia.cbegin(), ia.cend());
	eraseEven.assign(ia.cbegin(), ia.cend());
	std::list<int>::iterator begOdd = eraseOdd.begin();
	std::vector<int>::iterator begEven = eraseEven.begin();
	while (begOdd != eraseOdd.end())
	{
		if (*begOdd % 2 != 0)
			begOdd = eraseOdd.erase(begOdd);
		else
			++begOdd;
	}
	while (begEven != eraseEven.end())
	{
		if (*begEven % 2 == 0)
			begEven = eraseEven.erase(begEven);
		else
			++begEven;
	}
	std::cout << "eraseOdd: ";
	for (int i : eraseOdd)
		std::cout << i << " ";
	std::cout << std::endl;
	std::cout << "eraseEven: ";
	for (int i : eraseEven)
		std::cout << i << " ";
	std::cout << std::endl;
	system("pause");
	return 0;
}