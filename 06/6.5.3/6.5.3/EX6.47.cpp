#include <iostream>
#include <vector>

void print(const std::vector<int>::iterator &beg, const std::vector<int>::iterator &end)
{
#ifndef NDEBUG
	std::cout << "vector size is " << (end - beg) << std::endl;
#endif
	if (beg != end)
	{
		std::cout << *beg << " ";
		print(std::next(beg), end);
	}
}

int main()
{
	std::vector<int> v{ 0, 5, 8, 13, 9, 10, 12 };
	print(v.begin(), v.end());
	system("pause");
	return 0;
}
