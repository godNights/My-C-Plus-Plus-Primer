#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main()
{
	int a, b;
	cout << "input two integers" << endl;
	while (cin >> a >> b)
	{
		try
		{
			if (b == 0)
				throw runtime_error("The dividend can not be 0");
			cout << a / b << endl;
			cout << "input two integers" << endl;
		}
		catch (runtime_error err)
		{
			cout << err.what() << endl;
			cout << "if you want to end the input,please enter no" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;
			else
				cout << "input two integers" << endl;
		}
	}
	system("pause");
	return 0;
}