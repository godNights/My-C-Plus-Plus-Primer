#include <string>
#include <iostream>

int main()
{
	const char *c1("hello");
	const char *c2("world ! ");
	unsigned len = strlen(c1) + strlen(c2) + 1;
	char *c = new char[len]();
	strcat_s(c, len, c1);
	strcat_s(c, len, c2);
	std::cout << c << std::endl;
	delete[] c;
	std::string s1("hello");
	std::string s2("world !");
	std::string s3 = s1 + s2;
	std::cout << s3 << std::endl;
	system("pause");
	return 0;
}