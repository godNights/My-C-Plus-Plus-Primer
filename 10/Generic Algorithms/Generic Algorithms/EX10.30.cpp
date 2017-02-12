#include <iterator>
#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::vector<int> vecInt;
	std::istream_iterator<int> isInt(std::cin), eof;
	while (isInt != eof)
	{
		vecInt.push_back(*isInt++);
	}
	std::sort(vecInt.begin(), vecInt.end(), [](int a, int b) { return a > b; });
	copy(vecInt.cbegin(), vecInt.cend(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
	system("pause");
	return 0;
}