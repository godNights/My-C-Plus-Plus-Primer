#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int a[10] = {};
	for (size_t i = 0; i < 10; ++i)
		a[i] = i;
	for (size_t i = 0; i < 10; ++i)
		cout << a[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}