#include <iostream>

using std::cout;
using std::endl;

int main()
{
	cout << "sizeof(short) = " << sizeof(short) << endl;
	cout << "sizeof(int) = " << sizeof(int) << endl;
	cout << "sizeof(long) = " << sizeof(long) << endl;
	cout << "sizeof(long long) = " << sizeof(long long ) << endl;
	cout << "sizeof(char) = " << sizeof(char) << endl;
	cout << "sizeof(bool) = " << sizeof(bool) << endl;
	cout << "sizeof(wchar_t) = " << sizeof(wchar_t) << endl;
	cout << "sizeof(char16_t) = " << sizeof(char16_t) << endl;
	cout << "sizeof(char32_t) = " << sizeof(char32_t) << endl;
	cout << "sizeof(float) = " << sizeof(float) << endl;
	cout << "sizeof(double) = " << sizeof(double) << endl;
	cout << "sizeof(long double) = " << sizeof(long double) << endl;
	system("pause");
	return 0;
}