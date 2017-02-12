#include <iostream>
#include <map>
#include <string>

int main()
{
	std::multimap<std::string, std::string> book{ { "a", "text1" }, { "a", "text2"}, { "a", "text3"}, { "a", "text4" } };
	for (auto pos = book.equal_range("a"); pos.first != pos.second; ++pos.first)
		std::cout << pos.first->second << std::endl;
	auto found = book.find("a");
	auto count = book.count("a");
	while (count)
	{
		if (found->second == "text3")
		{
			book.erase(found);
			break;
		}
		++found;
		--count;
	}
	for (auto pos = book.equal_range("a"); pos.first != pos.second; ++pos.first)
		std::cout << pos.first->second << std::endl;
	system("pause");
	return 0;
}