#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, s2;
	cout << "请输入两个字符串:" << endl;
	getline(cin, s1);
	getline(cin, s2);
	if (s1 == s2)
	{
		cout << "两个字符串相等且等长" << endl;
	}
	else
	{
		cout << "两个字符串中较大的一个为:" << ((s1 > s1) ? s1 : s2) << endl;
		cout << "两个字符串中较长的一个为:" << ((s1.size() > s2.size()) ? s1 : s2) << endl;
	}
	system("pause");
	return 0;
}