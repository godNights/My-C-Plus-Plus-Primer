#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, sum;
	while (cin >> s1)
	{
		sum += s1;
		sum += ' '; //�ÿո�Ѷ���ַ����������� 
	}
	cout << sum << endl;
	system("pause");
	return 0;
}