#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	char c;
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	while (cin >> c)
	{
		if (c == 'a')
			++aCnt;
		else if (c == 'e')
			++eCnt;
		else if (c == 'i')
			++iCnt;
		else if (c == 'o')
			++oCnt;
		else if (c == 'u')
			++uCnt;
	}
	cout << "Number of vowel a :" << aCnt << endl;
	cout << "Number of vowel e :" << eCnt << endl;
	cout << "Number of vowel i :" << iCnt << endl;
	cout << "Number of vowel o :" << oCnt << endl;
	cout << "Number of vowel u :" << uCnt << endl;
	system("pause");
	return 0;
}