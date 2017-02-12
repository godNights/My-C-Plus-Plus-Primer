#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

int main()
{
	std::vector<int> vecInt;
	std::istream_iterator<int> is(std::cin), eof;
	while (is != eof)
	{
		vecInt.push_back(*is++);
	}
	std::sort(vecInt.begin(), vecInt.end(), [](int a, int b) { return a < b; });
	std::unique_copy(vecInt.cbegin(), vecInt.cend(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
	system("pause");
	return 0;
}