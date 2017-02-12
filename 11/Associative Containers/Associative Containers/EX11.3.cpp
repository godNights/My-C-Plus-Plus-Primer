#include <iostream>
#include <map>
#include <string>

int main()
{
	std::map<std::string, size_t> wordCount;
	std::string word;
	while (std::cin >> word)
		++wordCount[word];
	for (std::pair<std::string, size_t> w : wordCount)
	{
		std::cout << w.first << " occur: " << w.second << ((w.second > 1) ? " times " : " time ") << std::endl;
	}
	system("pause");
	return 0;
}