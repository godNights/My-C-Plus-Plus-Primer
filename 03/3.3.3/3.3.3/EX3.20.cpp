#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int a;
	vector<int> v;
	cout << "请输入一组具有偶数个数的整数:" << endl;
	while (cin >> a)
		v.push_back(a);
	if (v.empty())
	{
		cout << "输入不可为空" << endl;
		return -1;
	}
	else if ((v.size()%2) != 0)
	{
		cout << "该组整数个数需为整数" << endl;
		return -1;
	}
	else
	{
/*		相邻两数相加
***		for (decltype(v.size()) i = 0; i != v.size(); i += 2)
***		{
***			int sum = v[i] + v[i + 1];
***			cout << sum << endl;
***		}*/
/*      首尾两数相加*/
		for (decltype(v.size()) i = 0, ix = v.size(); i != (ix / 2); ++i)
		{
			int sum = v[i] + v[ix - i - 1];
			cout << sum << endl;
		}
		system("pause");
		return 0;
	}
}
