#include "Sales_data.h"
#include <iostream>

int main()
{
	Sales_data total;
	if (read(std::cin, total))
	{
		Sales_data trans;
		while (read(std::cin, trans))
		{
			if (trans.isbn() == total.isbn())
				total.combine(trans);
			else
			{
				print(std::cout, total);
				std::cout << std::endl;
				total = trans;
			}
		}
		print(std::cout, total);
		std::cout << std::endl;
	}
	else
	{
		std::cerr << "No data ? " << std::endl;
	}
	return 0;
}