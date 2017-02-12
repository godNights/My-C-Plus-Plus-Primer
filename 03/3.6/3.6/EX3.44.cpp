#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	using int_array = int[2];
	int ia[3][2] = { {11, 12}, {21, 22}, {31, 32} };
	for (int_array &p : ia)
		for (int q : p)
			cout << q << " ";
	cout << endl;
	for (size_t p = 0; p != 3; ++p)
		for (size_t q = 0; q != 2; ++q)
			cout << ia[p][q] << " ";
	cout << endl;
	for (int_array *p = ia; p != ia + 3; ++p)
		for (int *q = *p; q != *p + 2; ++q)
			cout << *q << " ";
	cout << endl;
	system("pause");
	return 0;
}