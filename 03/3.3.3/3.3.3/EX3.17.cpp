#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<string> v;
	string s;
	while (cin >> s)
	{
		v.push_back(s);
	}
	for (auto &c : v)
		for (auto &c2 : c)
			c2 = toupper(c2);
	for (auto c : v)
		cout << c << endl;
	system("pause");
	return 0;
}