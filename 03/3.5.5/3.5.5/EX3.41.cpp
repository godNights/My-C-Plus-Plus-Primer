#include <iostream>
#include <vector>
#include <iterator>

using std::begin;
using std::end;
using std::endl;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	int a[] = { 1,2,3,4,5,6,8 };
	vector<int> v(begin(a), end(a));
	for (auto c : v)
		cout << c << " ";
	cout << endl;
	system("pause");
	return 0;

}