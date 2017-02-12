#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	char c;
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0, tapCnt = 0, newLineCnt = 0;
	while (cin >> std::noskipws >> c) //std::noskipws:²»ºöÂÔ¿Õ°×
		switch (tolower(c))
		{
		case 'a':
			++aCnt;
			break;
		case 'e':
			++eCnt;
			break;
		case 'i':
			++iCnt;
			break;
		case 'o':
			++oCnt;
			break;
		case 'u':
			++uCnt;
			break;
		case ' ':
			++spaceCnt;
			break;
		case '\t':
			++tapCnt;
			break;
		case '\n':
			++newLineCnt;
			break;
		default:
			;
		}
	cout << "Number of vowel a :" << aCnt << endl
		<< "Number of vowel e :" << eCnt << endl
		<< "Number of vowel i :" << iCnt << endl
		<< "Number of vowel o :" << oCnt << endl
		<< "Number of vowel u :" << uCnt << endl
		<< "Number of space :" << spaceCnt << endl
		<< "Number of tap :" << tapCnt << endl
		<< "Number of newLineCnt :" << newLineCnt << endl;
	system("pause");
	return 0;
}