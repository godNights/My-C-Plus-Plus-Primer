#include <algorithm>
#include <iostream>
#include <functional>
#include <vector>
#include <string>

using vecS = std::vector<std::string>;

bool biggies(const std::string &word, size_t sz)
{
	return word.size() > sz;
}
vecS::iterator moreThanSize(vecS &vecString, size_t sz)
{
	vecS::iterator endString = std::stable_partition(vecString.begin(), vecString.end(),
		std::bind(biggies, std::placeholders::_1, sz));
	return endString;
}

void print(vecS::const_iterator beg, vecS::const_iterator end, const vecS &vecString)
{
	std::for_each(beg, end, [](const std::string &s) { std::cout << s << " "; });
	std::cout << std::endl;
}

int main()
{
	size_t sz;
	vecS vecString;
	std::string word;
	std::cin >> sz;
	while (std::cin >> word)
		vecString.push_back(word);
	print(vecString.cbegin(), vecString.cend(), vecString);
	auto endString = moreThanSize(vecString, sz);
	print(vecString.cbegin(), vecString.cend(), vecString);
	print(vecString.cbegin(), endString, vecString);
	system("pause");
	return 0;
}