#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::stable_sort;
using std::unique;

bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

void elimDups(vector<string> &val)
{
	stable_sort(val.begin(), val.end(), isShorter);
	auto end_unique = unique(val.begin(), val.end());
	val.erase(end_unique, val.end());
}

void print(const vector<string> &val)
{
	for (string c : val)
		cout << c << " ";
	cout << endl;
}

int main()
{
	vector<string> val;
	string s;
	while (cin >> s)
		val.push_back(s);
	print(val);
	elimDups(val);
	print(val);
	system("pause");
	return 0;
}