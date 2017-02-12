#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string a;
	vector <string> v;
	while (cin >> a)
	{
		v.push_back(a);
	}
	for (auto c : v)
		cout << c << ' ';
	cout << endl;
	system("pause");
	return 0;
}