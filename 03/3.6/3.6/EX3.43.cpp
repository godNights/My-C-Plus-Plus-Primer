/*
**	1.·¶Î§ for
**	2.Ë÷Òý
**	3.Ö¸Õë
*/

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	int ia[3][2] = { {11, 12}, {21, 22}, {31, 32} };
	for (int(&p)[2] : ia)
		for (int a : p)
			cout << a << " ";
	cout << endl;
	for (size_t a = 0; a <= 2; ++a)
		for (size_t b = 0; b <= 1; ++b)
			cout << ia[a][b] << " ";
	cout << endl;
	for (int(*p)[2] = ia; p != ia + 3; ++p)
		for (int *q = *p; q != *p + 2; ++q)
			cout << *q << " ";
	cout << endl;
	system("pause");
	return 0;

}