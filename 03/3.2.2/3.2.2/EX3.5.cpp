#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, sum;
	while (cin >> s1)
	{
		sum += s1;
		sum += ' '; //用空格把多个字符串连接起来 
	}
	cout << sum << endl;
	system("pause");
	return 0;
}