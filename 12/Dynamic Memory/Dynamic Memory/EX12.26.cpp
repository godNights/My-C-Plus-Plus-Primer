#include <string>
#include <iostream>
#include <allocators>

int main()
{
	std::allocator<std::string> alloc;
	unsigned n = 5;
	auto p = alloc.allocate(n);
	auto q = p;
	std::string s;
	while (std::cin >> s && q != p + n)
	{
		alloc.construct(q++, s);
	}
	while (q != p)
	{
		std::cout << *--q << " ";
	}
	std::cout << std::endl;
	alloc.destroy(q);
	alloc.deallocate(p, n);
	system("pause");
	return 0;
}