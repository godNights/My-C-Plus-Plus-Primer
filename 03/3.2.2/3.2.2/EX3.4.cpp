#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, s2;
	cout << "�����������ַ���:" << endl;
	getline(cin, s1);
	getline(cin, s2);
	if (s1 == s2)
	{
		cout << "�����ַ�������ҵȳ�" << endl;
	}
	else
	{
		cout << "�����ַ����нϴ��һ��Ϊ:" << ((s1 > s1) ? s1 : s2) << endl;
		cout << "�����ַ����нϳ���һ��Ϊ:" << ((s1.size() > s2.size()) ? s1 : s2) << endl;
	}
	system("pause");
	return 0;
}