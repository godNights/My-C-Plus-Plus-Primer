#include <map>
#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::map<std::string, size_t> m;
	std::string word;
	while (std::cin >> word)
	{
		for (char &c : word)
			c = tolower(c);
		word.erase(std::remove_if(word.begin(), word.end(), ispunct), word.end());
		++m[word];
	}
	for (const std::pair<std::string, size_t> &w : m)
		std::cout << w.first << " occur : " << w.second << ((w.second > 1) ? " times " : " time ") << std::endl;
	system("pause");
	return 0;
}