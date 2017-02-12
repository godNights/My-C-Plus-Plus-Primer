#include "h:\VS\C++ Primer\07\Class\Class\Sales_data.h"
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::stable_sort;

bool compareIsbn(const Sales_data &s1, const Sales_data &s2)
{
	return s1.isbn() < s2.isbn();
}

void print(vector<Sales_data> ve)
{
	for (Sales_data s : ve)
		cout << s.isbn() << " ";
	cout << endl;
}
int main()
{
	Sales_data sa1("a"), sa2("ab"), sa3("a"), sa4("abc"), sa5("zxqd"), sa6("bb");
	vector<Sales_data> veSales{ sa1,sa2,sa3,sa4,sa5,sa6 };
	print(veSales);
	stable_sort(veSales.begin(), veSales.end(), compareIsbn);
	print(veSales);
	system("pause");
	return 0;
}