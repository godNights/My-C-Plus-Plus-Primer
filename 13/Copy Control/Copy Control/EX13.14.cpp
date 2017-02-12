#include <iostream>

class numberd
{
public:
	numberd()
	{
		static int unique = 10;
		mysn = unique++;
	}
	int mysn;
};

void f(numberd s)
{
	std::cout << s.mysn << std::endl;
}

int main()
{
	numberd a, b = a, c = b;
	f(a);
	f(b);
	f(c);
	system("pause");
	return 0;
}