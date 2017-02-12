#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	int ia[3][2] = { {11, 12}, {21, 22}, {31, 32} };
	for (auto &p : ia)
		for (auto q : p)
			cout << q << " ";
	cout << endl;
	for (auto p = 0; p != 3; ++p)
		for (auto q = 0; q != 2; ++q)
			cout << ia[p][q] << " ";
	cout << endl;
	for (auto *p = ia; p != ia + 3; ++p)
		for (auto *q = *p; q != *p + 2; ++q)
			cout << *q << " ";
	cout << endl;
	system("pause");
	return 0;

}