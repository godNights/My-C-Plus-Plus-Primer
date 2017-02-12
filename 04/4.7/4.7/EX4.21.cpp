#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> v;
	int a;
	while (cin >> a)
		v.push_back(a);
	for (auto c : v)
		cout << ((c % 2 == 1) ? 2*c : c) << " ";
	cout << endl;
	system("pause");
	return 0;
}