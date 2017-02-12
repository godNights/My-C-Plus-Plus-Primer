#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vi{ 1, 2, 3, 4, 5, 6, 7, 8 };
	auto iter = vi.begin();
	while (iter != vi.end())
	{
		if (*iter % 2)
		{
			iter = vi.insert(iter, *iter);
			++iter;
		}
		++iter;
	}
	for (auto v : vi)
		std::cout << v << " ";
	std::cout << std::endl;
	system("pause");
	return 0;
}