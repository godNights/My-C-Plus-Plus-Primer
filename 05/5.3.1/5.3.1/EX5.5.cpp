#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<string>  grade{ "E", "D", "C", "B", "A", "A++", "error!" };
	double score = 0;
	string lettergrade;
	while (cin >> score)
	{
		if (score > 100 || score < 0)
			lettergrade = grade[6];
		else if (score < 60)
			lettergrade = grade[0];
		else
			lettergrade = grade[(static_cast<int>(score) - 50) / 10];
		cout << lettergrade << endl;
	}
	system("pause");
	return 0;
}