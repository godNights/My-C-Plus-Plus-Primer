#include <iostream>
#include <string>

int main(int argc, char * argv[])
{
	std::string s;
	for (int i = 1; i != argc; ++argc)
	{
		s += argv[i];
		s += " ";
	}
	std::cout << s << std::endl;
	system("pause");
	return 0;
}