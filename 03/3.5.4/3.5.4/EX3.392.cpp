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
		cout << "���" << endl;
	else
		cout << "�����" << endl;
	system("pause");
	return 0;
}