#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;

int fact(int val)
{
	int ret = 1;
	while (val > 1)
		ret *= val--;
	return ret;
}

int main()
{
	int a;
	cout << "please enter an interger greater than or equal to 0" << endl;
	while (cin >> a)
	{
		try
		{
			if (a < 0)
				throw std::runtime_error("The interger you enter must be greater than or equal to 0");
			cout << "The factorial of " << a << " is " << fact(a) << endl;
			cout << "if you want to end this input,please enter no" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;
			else
				cout << "please enter an interger greater than or equal to 0" << endl;
		}
		catch (std::runtime_error err)
		{
			cout << err.what() << endl;
			cout << "if you want to end this input,please enter no" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;
			else
				cout << "please enter an interger greater than or equal to 0" << endl;
		}
	}
	system("pause");
	return 0;
}