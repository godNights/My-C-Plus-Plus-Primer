#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::sort;
using std::unique;
using std::string;
using std::vector;

void elimDups(vector<string> &val)
{
	sort(val.begin(), val.end());
	vector<string>::iterator end_unique = unique(val.begin(), val.end());
	val.erase(end_unique, val.end());
}

int main()
{
	vector<string> val{ "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "the", "turtle" };
	for (string s : val)
		cout << s << ' ';
	cout << endl;
	sort(val.begin(), val.end());
	for (string s : val)
		cout << s << ' ';
	cout << endl;
	vector<string>::iterator end_unique = unique(val.begin(), val.end());
	for (string s : val)
		cout << s << ' ';
	cout << endl;
	val.erase(end_unique, val.end());
	for (string s : val)
		cout << s << ' ';
	cout << endl;
	system("pause");
	return 0;
}