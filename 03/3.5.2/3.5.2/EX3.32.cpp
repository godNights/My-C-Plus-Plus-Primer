#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> v(10);
	for (auto beg = v.begin(); beg != v.end(); ++beg)
		*beg = beg - v.begin();
	for (auto c : v)
		cout << c << " ";
	cout << endl;
	system("pause");
	return 0;
}