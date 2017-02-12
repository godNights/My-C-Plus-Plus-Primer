#include "H:\VS\C++ Primer\07\Class\Class\Sales_data.h"
#include <set>

bool compareIsbn(const Sales_data &sa1, const Sales_data &sa2)
{
	return sa1.isbn() < sa2.isbn();
}

int main()
{
	std::multiset<Sales_data, decltype(compareIsbn) *> bookstore(compareIsbn);
	return 0;
}