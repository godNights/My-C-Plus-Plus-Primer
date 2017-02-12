#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1("hello!");
	string s2("world.");
	if (s1 == s2)
		cout << "相等" << endl;
	else
		cout << "不相等" << endl;
	system("pause");
	return 0;
}