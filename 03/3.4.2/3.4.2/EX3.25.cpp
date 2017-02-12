#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> v, val(11, 0);
	int a = 0;
	while (cin >> a)
		if (a >=0 && a <= 100)
			v.push_back(a);
	if (v.empty())
		return -1;
	else
	{
		for (auto beg = v.cbegin(); beg != v.end(); ++beg)
			++(*(val.begin() + (*beg) / 10));
		for (auto beg = val.cbegin(); beg != val.end(); ++beg)
			cout << *beg << " ";
		cout << endl;
		system("pause");
		return 0;
	}
}
