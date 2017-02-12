#include <iostream>
#include <vector>

class X
{
public:
	X() { std::cout << "X()" << std::endl; }
	~X() { std::cout << "~X()" << std::endl; }
	X(const X &x) { std::cout << "X(const X &x)" << std::endl; }
	X &operator=(const X &x) { std::cout << "operator" << std::endl; return *this; }
};

int main()
{
	std::vector<X> vecX1, vecX2;
	std::vector<X> vecX3(vecX1);
	vecX3 = vecX2;
	X x1, x2;
	X x3(x1);
	X x5 = x2;
	x3 = x2;
	X *x4 = new X();
	delete x4;
	system("pause");
	return 0;
}