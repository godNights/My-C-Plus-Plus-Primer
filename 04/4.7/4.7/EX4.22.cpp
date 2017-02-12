#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int a = 0;
	while (cin >> a)
	{
		cout << ((a > 90 && a <=100) ? "high pass" : (a > 75 && a <= 90) ? "pass" : (a >= 60 && a <= 75) ? "low pass"
			: (a < 60 &&  a >= 0) ? "fail" : "error! please reentet the grade") << endl;
		if (a > 90 && a <= 100)
			cout << "high pass" << endl;
		else if (a > 75 && a <= 90)
			cout << "pass" << endl;
		else if (a >= 60 && a <= 75)
			cout << "low pass" << endl;
		else if (a >= 0 && a < 60)
			cout << "fail" << endl;
		else
			cout << "error! please reenter the grade" << endl;
	}
	system("pause");
	return 0;
}