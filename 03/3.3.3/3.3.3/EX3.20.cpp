#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int a;
	vector<int> v;
	cout << "������һ�����ż������������:" << endl;
	while (cin >> a)
		v.push_back(a);
	if (v.empty())
	{
		cout << "���벻��Ϊ��" << endl;
		return -1;
	}
	else if ((v.size()%2) != 0)
	{
		cout << "��������������Ϊ����" << endl;
		return -1;
	}
	else
	{
/*		�����������
***		for (decltype(v.size()) i = 0; i != v.size(); i += 2)
***		{
***			int sum = v[i] + v[i + 1];
***			cout << sum << endl;
***		}*/
/*      ��β�������*/
		for (decltype(v.size()) i = 0, ix = v.size(); i != (ix / 2); ++i)
		{
			int sum = v[i] + v[ix - i - 1];
			cout << sum << endl;
		}
		system("pause");
		return 0;
	}
}
