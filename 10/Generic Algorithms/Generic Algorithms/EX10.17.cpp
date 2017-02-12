#include "h:\VS\C++ Primer\07\Class\Class\Sales_data.h"
#include <iostream>
#include <vector>
#include <algorithm>

void compareIsbn(std::vector<Sales_data> &veSa)
{
	std::stable_sort(veSa.begin(), veSa.end(), [](const Sales_data &sa1, const Sales_data &sa2)
	{ return sa1.isbn() < sa2.isbn(); });
}

void print(const std::vector<Sales_data> &veSa)
{
	for (Sales_data c : veSa)
		std::cout << c.isbn() << " ";
	std::cout << std::endl;
}

int main()
{
	Sales_data sa1("s"), sa2("zxas"), sa3("saq"), sa4("as"), sa5("as");
	std::vector<Sales_data> veSa{ sa1, sa2, sa3, sa4, sa5 };
	print(veSa);
	compareIsbn(veSa);
	print(veSa);
	system("pause");
	return 0;
}