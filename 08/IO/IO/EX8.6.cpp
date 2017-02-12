#include <fstream>
#include <iostream>
#include "H:\VS\C++ Primer\07\Class\Class\Sales_data.h"


/*
//  在调试过程中应进入 调试-属性-调试-命令参数，并输入想要输入的参数，不同参数之间用空格隔开
//  其中第一个参数为 argv[1],第二个参数为 argc[2],argc[0]为可执行程序的路径
*/
int main(int argc, char *argv[])
{
	
	std::ifstream input(argv[1]);
	std::ofstream output(argv[2], std::ofstream::app | std::ofstream::out);
	Sales_data total;
	if (read(input, total))
	{
		Sales_data trans;
		while (read(input, trans))
		{
			if (trans.isbn() == total.isbn())
			{
				total.combine(trans);
			}
			else
			{
				print(output, total) << std::endl;
				total = trans;
			}
		}
		print(output, total) << std::endl;
		system("pause");
		return 0;
	}
	else
	{
		std::cerr << "No related documents found!" << std::endl;
		system("pause");
		return -1;
	}
}