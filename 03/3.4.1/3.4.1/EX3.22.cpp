#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<string> text;
	string line;
	while (getline(cin, line))
		text.push_back(line);
	for (auto beg = text.begin(); beg != text.end() && !beg->empty(); ++beg)
	{
		for (auto &c : *beg)
			c = toupper(c);
		cout << *beg << endl;
	}
	system("pause");
	return 0;
}