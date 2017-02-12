#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
	vector<int> v1, v2;
	int a;
	char c;
	bool b = true;
	while (cin >> a && ((c = getchar()) != '\n'))
	{
		v1.push_back(a);
	}
	while (cin >> a && ((c = getchar()) != '\n'))
	{
		v2.push_back(a);
	}
	if (v1.empty() || v2.empty())
	{
		return -1;
	}
	else if (v1 == v2)
	{
		cout << "Two vectors is identical" << endl;
	}
	else
	{
		if (v1 < v2)
		{
			for (auto v1_beg = v1.cbegin(), v2_beg = v2.cbegin(); v1_beg != v1.cend(); ++v1_beg, ++v2_beg)
				if (*v1_beg != *v2_beg)
				{
					b = false;
					break;
				}
			if (b == true)
				cout << "The first vector is the next vector's prefix" << endl;
			else
				cout << "no" << endl;
		}
		else
		{
			for (auto v1_beg = v1.cbegin(), v2_beg = v2.cbegin(); v2_beg != v2.cend(); ++v1_beg, ++v2_beg)
				if (*v2_beg != *v1_beg)
				{
					b = false;
					break;
				}
			if (b == true)
				cout << "The second vector is the first vector's prefix" << endl;
			else
				cout << "no" << endl;
		}
				
	}
	system("pause");
	return 0;
}