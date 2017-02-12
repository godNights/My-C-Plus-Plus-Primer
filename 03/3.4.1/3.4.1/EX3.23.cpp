#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
	int a = 0;
	vector <int> v(10);
	for (auto beg = v.begin(); beg != v.end() && cin >> a; ++beg)
		*beg = a;
	for (auto beg = v.begin(); beg != v.end(); ++beg)
		cout << (*beg) * 2 << " ";
	cout << endl;
	system("pause");
	return 0;
}