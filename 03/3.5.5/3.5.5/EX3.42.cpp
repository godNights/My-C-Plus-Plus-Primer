#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> v{ 0,1,2,3,4,5,6,8,9,10 };
	const size_t size = v.size();
	int a[10];
	for (auto beg = v.cbegin(); beg != v.cend(); ++beg)
		a[beg - v.cbegin()] = *beg;
	for (auto c : a)
		cout << c << " ";
	cout << endl;
	cout << "sizeof(v) = " << sizeof(v) << endl;
	cout << "sizeof(a) = " << sizeof(a) << endl;
	system("pause");
	return 0;
}