#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void newName(string &s, const string &prefix, const string &suffix)
{
	s.insert(s.begin(), prefix.cbegin(), prefix.cend());
	s.insert(s.end(), suffix.cbegin(), suffix.cend());
}

int main()
{
	string s, prefix, suffix;
	cin >> s >> prefix >> suffix;
	newName(s, prefix, suffix);
	cout << s << endl;
	system("pause");
	return 0;
}