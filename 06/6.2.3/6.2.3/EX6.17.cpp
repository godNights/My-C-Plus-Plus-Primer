#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

bool containsCapitalLetters(const string &s)
{
	bool b = false;
	for (char c : s)
		if (isupper(c))
		{
			b = true;
			break;
		}
	return b;
}

string intoLowercaseLetters(string &s)
{
	for (char &c : s)
		if (isupper(c))
			c += 32;
	return s;
}

int main()
{
	string s;
	bool b;
	while (cin >> s)
	{
		b = containsCapitalLetters(s);
		if (b == true)
			cout << "contain" << endl;
		else
			cout << "does no contain" << endl;
		cout << intoLowercaseLetters(s) << endl;
	}
	system("pause");
	return 0;
}