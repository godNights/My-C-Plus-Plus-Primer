#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::list<int> l = { 1, 2, 3, 4, 9, 7, 0 };
	std::vector<int> v1 = { 1, 5, 9, 7 };
	std::vector<double> d1(l.cbegin(), l.cend());
	std::vector<double> d2(v1.cbegin(), v1.cend());
	for (std::vector<double>::const_iterator beg = d1.cbegin(), end = d1.cend(); beg != end; ++beg)
	{
		std::cout << *beg << " ";
	}
	std::cout << std::endl;
	for (std::vector<double>::const_iterator beg = d2.cbegin(), end = d2.cend(); beg != end; ++beg)
	{
		std::cout << *beg << " ";
	}
	std::cout << std::endl;
	system("pause");
	return 0;
}