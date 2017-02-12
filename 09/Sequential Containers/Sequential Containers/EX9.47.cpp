#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main()
{
	string alphabet("qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM");
	string number("0123456789");
	string finded("ab2c3d7R4E6");
	for (string::size_type pos = 0; (pos = finded.find_first_of(number, pos)) != string::npos; ++pos)
	{
		cout << "find number at index " << pos << " elements is " << finded[pos] << endl;
	}
	for (string::size_type pos = 0; (pos = finded.find_first_of(alphabet, pos)) != finded.npos; ++pos)
	{
		cout << "find alphabet at index " << pos << " elments is " << finded[pos] << endl;
	}
	for (string::size_type pos = 0; (pos = finded.find_first_not_of(alphabet, pos)) != finded.npos; ++pos)
	{
		cout << "find number at index " << pos << " elments is " << finded[pos] << endl;
	}
	for (string::size_type pos = 0; (pos = finded.find_first_not_of(number, pos)) != finded.npos; ++pos)
	{
		cout << "find alphabet at index " << pos << " elments is " << finded[pos] << endl;
	}
	system("pause");
	return 0;
}