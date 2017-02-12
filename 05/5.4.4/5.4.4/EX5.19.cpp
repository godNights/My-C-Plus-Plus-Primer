#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1, s2, s3("equall"), s4;
	do
	{
		cout << "please input two string" << endl;
		cin >> s1 >> s2;
		cout << ((s1.size() > s2.size()) ? s2 : 
			(s1.size() < s2.size()) ? s1 : s3) << endl;
		cout << "if you want to input more,please enter yes" << endl;
		cin >> s4;
	} while (!s4.empty() && s4[0] == 'y');
	system("pause");
	return 0;
}