#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int a = 0, sum = 0;
	while (++a, a != 11)
		sum += a;
	cout << sum << endl;
	system("pause");
	return 0;
}