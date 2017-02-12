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
		lettergrade = ((score > 100 || score < 0) ? grade[6] : (score < 60) ? grade[0]
			: grade[(static_cast<int>(score) - 50) / 10]);
		cout << lettergrade << endl;
	}
	system("pause");
	return 0;
}