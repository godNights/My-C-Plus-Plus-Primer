#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int a;
	vector <int> v;
	while (cin >> a)
	{
		v.push_back(a);
	}	for (auto c : v)
		cout << c << ' ';
	cout << endl;
	system("pause");
	return 0;
}