#include <iterator>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>

using isString = std::istream_iterator<std::string>;
using osString = std::ostream_iterator<std::string>;
using vecString = std::vector<std::string>;


int main()
{
	std::ifstream is("text.txt");
	isString in(is), eof;
	vecString vec;
	std::copy(in, eof, std::back_inserter(vec));
	std::copy(vec.cbegin(), vec.cend(), osString(std::cout, "\n"));
	system("pause");
	return 0;
}