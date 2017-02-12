#include "Sales_data.h"
#include <iostream>

int main()
{
	Sales_data data1;
	Sales_data data2("casual");
	Sales_data data3("random", 20, 5);
	Sales_data data4(std::cin);
	print(std::cout, data1) << std::endl;
	print(std::cout, data2) << std::endl;
	print(std::cout, data3) << std::endl;
	print(std::cout, data4) << std::endl;
	system("pause");
	return 0;
}