#include <iostream>
#include <vector>
#include <string>


void print(const std::vector<int>::iterator &beg, const std::vector<int>::iterator &end)
{
	if (beg != end)
	{
		std::cout << *beg << " ";
		print(std::next(beg), end);
	}
}

int main()
{
	std::vector<int> a{ 1,2,3,5,8,0 };
	print(a.begin(), a.end());
	std::cout << std::endl;
	system("pause");
	return 0;
}