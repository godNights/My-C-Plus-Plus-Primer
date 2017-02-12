#include <fstream>
#include <iostream>
#include "H:\VS\C++ Primer\07\Class\Class\Sales_data.h"


/*
//  �ڵ��Թ�����Ӧ���� ����-����-����-�����������������Ҫ����Ĳ�������ͬ����֮���ÿո����
//  ���е�һ������Ϊ argv[1],�ڶ�������Ϊ argc[2],argc[0]Ϊ��ִ�г����·��
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