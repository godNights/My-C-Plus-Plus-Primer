#include <iostream>
#include <deque>
#include <list>

int main()
{
	std::list<int> lt;
	std::deque<int> odd, even;
	int a;
	while (std::cin >> a)
		lt.push_back(a);
	for (int i : lt)
	{
		if (i % 2 == 0)
			even.push_back(i);
		else
			odd.push_back(i);
	}
	if (!odd.empty())
	{
		std::cout << "The odd number is entered: ";
		for (int i : odd)
			std::cout << i << " ";
		std::cout << std::endl;
	}
	if (odd.empty() && !even.empty())
	{
		std::cout << "There is no odd number input!" << std::endl;
	}
	if (!even.empty())
	{
		std::cout << "The even number is entered: ";
		for (int i : even)
			std::cout << i << " ";
		std::cout << std::endl;
	}
	if (even.empty() && !odd.empty())
	{
		std::cout << "There is no even number input!" << std::endl;
	}
	if (odd.empty() && even.empty())
	{
		std::cout << "No number entered!" << std::endl;
	}
	system("pause");
	return 0;
}