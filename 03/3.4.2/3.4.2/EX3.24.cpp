#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	cout << "������һ�麬��ż������������" << endl;
	vector<int> v;
	int a = 0;
	while (cin >> a)
		v.push_back(a);
	if (v.size() == 0)
	{
		cout << "������һ������" << endl;
		return -1;
	}
	else
	{
		if (v.size() % 2 != 0)
		{
			cout << "���������ĸ�������Ϊż��" << endl;
			return -1;
		}
		else
		{
			/*�����������
			****for (auto beg = v.cbegin(); beg != v.cend(); beg += 2)
			****{
			****	int sum = *beg + (*(beg + 1));
			****	cout << sum << " ";
			****}*/
			for (auto beg = v.cbegin(), end = v.cend() - 1; beg != end + 1; ++beg, --end)
			{
				int sum = (*beg) + (*end);
				cout << sum << " ";
			}
			cout << endl;
			system("pause");
			return 0;
		}
	}
}