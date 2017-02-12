#include <iostream>
#include <map>
#include <string>

int main()
{
	std::map<std::string, size_t> wordCount;
	std::string word;
	while (std::cin >> word)
	{
		auto ret = wordCount.insert({ word, 1 });
		if (!ret.second)
			++ret.first->second;
	}
	for (auto c : wordCount)
	{
		std::cout << c.first << " " << c.second << std::endl;
	}
	system("pause");
	return 0;
}