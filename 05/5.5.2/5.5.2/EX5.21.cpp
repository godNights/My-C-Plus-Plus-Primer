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
	/*eof()��cin�ĳ�Ա�������������iostate��״̬�е�eofbit�Ƿ�Ϊ�棬
	���ڼ�������ctrl+z��ctrl+dģ��EOF��eofbitλΪ�棬��ʱcin.eof()�����档*/
	if (!cin.eof())
		cout << word << endl;
	else
		cout << "No consecutive words found" << endl;
	system("pause");
	return 0;
}