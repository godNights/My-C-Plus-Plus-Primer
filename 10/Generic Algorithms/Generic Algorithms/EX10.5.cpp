#include <iostream>
#include <numeric>
#include <vector>
#include <list>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::equal;
using std::string;
using std::list;
using std::vector;

int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		if (equal(s1.cbegin(), s1.cend(), s2.cbegin()))
			cout << "equal" << endl;
		else
			cout << "not equal" << endl;
	}
	system("pause");
	return 0;
}