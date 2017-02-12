#include <iostream>
#include <vector>

int main()
{
	std::vector<int> a;
	std::cout << "size:" << a.size() << " " << "capacitu:" << a.capacity() << std::endl;
	for (std::vector<int>::size_type ix = 0; ix != 10; ++ix)
	{
		a.push_back(ix);
	}
	std::cout << "size:" << a.size() << " " << "capacitu:" << a.capacity() << std::endl;
	for (std::vector<int>::size_type ix = 0; ix != 20; ++ix)
	{
		a.push_back(ix);
	}
	std::cout << "size:" << a.size() << " " << "capacitu:" << a.capacity() << std::endl;
	a.reserve(35);
	std::cout << "size:" << a.size() << " " << "capacitu:" << a.capacity() << std::endl;
	a.shrink_to_fit();
	std::cout << "size:" << a.size() << " " << "capacitu:" << a.capacity() << std::endl;
	system("pause");
	return 0;
}