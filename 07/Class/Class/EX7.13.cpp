#include "Sales_data.h"
#include <iostream>
#include <istream>

int main()
{
	Sales_data total(std::cin);
	if (!total.isbn().empty())
	{
		std::istream &is = std::cin;
		while (is)
		{
			Sales_data trans(is);
			if (trans.isbn() == total.isbn())
				total.combine(trans);
			else
			{
				print(std::cout, total) << std::endl;
				total = trans;
			}
		}
		system("pause");
		return 0;
	}
	else
	{
		std::cerr << "No data ? " << std::endl;
		system("pause");
		return -1;
	}
}