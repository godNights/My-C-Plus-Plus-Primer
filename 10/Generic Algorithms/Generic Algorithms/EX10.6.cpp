#include <vector>
#include <algorithm>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::fill_n;

int main()
{
	vector<int> v;
	int a;
	while (cin >> a)
		v.push_back(a);
	for (int c : v)
		cout << c << ' ';
	cout << endl;
	fill_n(v.begin(), v.size(), 0);
	for (int c : v)
		cout << c << ' ';
	cout << endl;
	system("pause");
	return 0;
}