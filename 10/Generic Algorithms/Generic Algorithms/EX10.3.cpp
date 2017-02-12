#include <iostream>
#include <vector>
#include <numeric>

using std::cin;
using std::cout;
using std::endl;
using std::accumulate;
using std::vector;

int main()
{
	vector<int> v;
	int a, sum = 0;
	while (cin >> a)
		v.push_back(a);
	sum = accumulate(v.cbegin(), v.cend(), 0);
	cout << sum << endl;
	system("pause");
	return 0;
}