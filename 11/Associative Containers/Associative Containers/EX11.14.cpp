#include <map>
#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::map<std::string, std::vector<std::pair<std::string, std::string>>> person;
	char c;
	std::string firstName, lastName, birthday;
	while (std::cin >> firstName)
	{
		while (std::cin >> lastName >> birthday && (c = getchar()) != '\n')
			person[firstName].push_back(std::make_pair(lastName, birthday));
		person[firstName].push_back(std::make_pair(lastName, birthday));
	}
	for (auto p : person)
	{
		for (auto n : p.second)
			std::cout << p.first << "." << n.first << " birthday:" << n.second << "    ";
		std::cout << std::endl;
	}
	system("pause");
	return 0;
}