#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int moreThanSix(const std::vector<std::string> &veString)
{
	int count = std::count_if(veString.begin(), veString.end(), [](const std::string &s) { return s.size() > 6; });
	return count;
}

int main()
{
	std::string word;
	std::vector<std::string> veString;
	while (std::cin >> word)
	{
		veString.push_back(word);
	}
	int count = moreThanSix(veString);
	std::cout << count << std::endl;
	system("pause");
	return 0;
}