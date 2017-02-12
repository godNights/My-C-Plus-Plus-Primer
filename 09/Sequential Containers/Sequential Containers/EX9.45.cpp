#include <string>
#include <iostream>

using std::string;
using std::endl;
using std::cout;
using std::cin;

string newName(const string &s, const string &prefix, const string &suffix)
{
	string s1 = s;
	s1.insert(s1.begin(), prefix.cbegin(), prefix.cend());
	s1.append(suffix);
	return s1;
}

int main()
{
	string s, prefix, suffix, name;
	cin >> s >> prefix >> suffix;
	name = newName(s, prefix, suffix);
	cout << s << " " << name << endl;
	system("pause");
	return 0;
}