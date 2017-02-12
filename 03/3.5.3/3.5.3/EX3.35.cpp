#include <iostream>
#include <iterator>
 
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
	int ia[] = { 1, 2, 3, 4, 5, 6, 7 };
	for (int *beg = begin(ia); beg != end(ia); ++beg)
		*beg = 0;
	for (int *beg = begin(ia); beg != end(ia); ++beg)
		cout << *beg << " ";
	cout << endl;
	system("pause");
	return 0;
}