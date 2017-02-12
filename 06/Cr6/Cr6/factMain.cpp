#include "Chapter6.h"
#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int a;
	cout << "please enter a interger no less than 0" << endl;
	while (cin >> a)
	{
		try
		{
			if (a < 0)
				throw std::runtime_error("The interger entered must be no less than 0");
			cout << a << "! = " << fact(a) << endl;
			cout << "if you want to end the input,please enter no" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;
			cout << "please enter a interger no less than 0" << endl;
		}
		catch (std::runtime_error err)
		{
			cout << err.what() << endl;
			cout << "if you want to end the input,please enter no" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;
			cout << "please enter a interger no less than 0" << endl;
		}
	}
	system("pause");
	return 0;
}