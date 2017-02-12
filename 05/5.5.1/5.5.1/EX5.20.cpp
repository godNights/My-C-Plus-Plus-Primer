#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string word, preword;
	bool b = false;
	while (cin >> word)
	{
		if (word == preword)
		{
			b = true;
			break;
		}
		preword = word;
	}
	if (b == true)
		cout << word << endl;
	else
		cout << "No consecutive words found" << endl;
	system("pause");
	return 0;
}