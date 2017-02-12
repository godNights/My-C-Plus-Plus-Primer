#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string word, preword;
	while (cin >> word)
	{
		if (!isupper(word[0]))
			continue;
		else if (word == preword)
			break;
		else
			preword = word;
	}
	/*eof()是cin的成员函数，用来检测iostate流状态中的eofbit是否为真，
	当在键盘中用ctrl+z或ctrl+d模拟EOF后，eofbit位为真，此时cin.eof()返回真。*/
	if (!cin.eof())
		cout << word << endl;
	else
		cout << "No consecutive words found" << endl;
	system("pause");
	return 0;
}