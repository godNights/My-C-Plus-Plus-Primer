#include <cstring>
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	const char* s1 = "hello!";
	const char* s2 = "world!";
	if (strcmp(s1, s2) == 0)
		cout << "���" << endl;
	else
		cout << "�����" << endl;
	system("pause");
	return 0;
}