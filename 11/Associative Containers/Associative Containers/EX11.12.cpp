#include <utility>
#include <vector>
#include <iostream>
#include <string>

int main()
{
	std::vector<std::pair<std::string, int>> vecPair;
	std::string s;
	int a;
	while (std::cin >> s >> a)
		vecPair.push_back(std::make_pair(s, a));
	for (auto vec : vecPair)
		std::cout << vec.first << " " << vec.second << std::endl;
	system("pause");
	return 0;
}