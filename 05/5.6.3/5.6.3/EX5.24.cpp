#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		if (b == 0)
			throw runtime_error("The dividend can not be 0");
		cout << a / b << endl;
	}
	system("pause");
	return 0;
}