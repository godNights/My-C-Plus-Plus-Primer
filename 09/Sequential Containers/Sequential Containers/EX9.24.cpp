#include <iostream>
#include <vector>

int main()
{
	std::vector<int> val;
	int a = val[0], b = val.at(0), c = val.front(), d = *val.cbegin();
	std::cout << a << " " << b << " " << c << " " << d << " " << std::endl;
	system("pause");
	return 0;
}