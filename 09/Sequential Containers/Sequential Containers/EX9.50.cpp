#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	vector<string> s;
	string ns;
	while (cin >> ns)
		s.push_back(ns);
	int num = 0;
	for (auto c : s)
	{
		num += std::stoi(c);
	}
	cout << num << endl;
	system("pause");
	return 0;
}