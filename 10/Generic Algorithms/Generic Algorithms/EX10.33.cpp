#include <fstream>
#include <iterator>
#include <algorithm>

int main()
{
	std::ifstream input("input.txt");
	std::ofstream odd("odd.txt"), even("even.txt");
	std::istream_iterator<int> is(input), eof;
	std::ostream_iterator<int> osOdd(odd, " ");
	std::ostream_iterator<int> osEven(even, "\n");
	std::for_each(is, eof, [&osOdd, &osEven](int i) { (i % 2 == 0) ? osOdd++ = i : osEven++ = i; });
	return 0;
}