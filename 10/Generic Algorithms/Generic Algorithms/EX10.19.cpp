#include <algorithm>
#include <string>
#include <iostream>
#include <vector>

std::vector<std::string>::iterator biggies(std::vector<std::string> &sVal, std::vector<std::string>::size_type st)
{
	std::vector<std::string>::iterator end_part = std::stable_partition(sVal.begin(), sVal.end(), [st](const std::string &s)
	{ return s.size() >= st; });
	return end_part;
}

void print(const std::vector<std::string> &veString)
{
	for (std::string word : veString)
		std::cout << word << " ";
	std::cout << std::endl;
}

int main()
{
	std::string word;
	std::vector<std::string>::iterator end_number;
	unsigned number;
	char c;
	std::vector<std::string> veWord, biggierWord;
	std::cin.tie(&std::cout);
	while (std::cin >> number)
	{
		while (std::cin >> word && (c = getchar()) != '\n')
			veWord.push_back(word);
		veWord.push_back(word);
		print(veWord);
		end_number = biggies(veWord, number);
		biggierWord.assign(veWord.begin(), end_number);
		print(veWord);
		print(biggierWord);
	}
	system("pause");
	return 0;
}