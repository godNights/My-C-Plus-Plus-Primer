#include <iostream>
#include <initializer_list>

int sum(std::initializer_list<int> const &il)
{
	int sum = 0;
	for (auto beg = il.begin(), end = il.end(); beg != end; ++beg)
		sum += *beg;
	return sum;
}

int main()
{
	std::cout << sum({ 5, 6, 3, 7 }) << std::endl;
	system("pause");
	return 0;
}