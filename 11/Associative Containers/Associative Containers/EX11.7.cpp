#include <iostream>
#include <vector>
#include <map>
#include <string>

int main()
{
	std::map<std::string, std::vector<std::string>> name;
	char c;
	std::string firstName, lastName;
	while (std::cin >> firstName)
	{
		while (std::cin >> lastName && (c = getchar()) != '\n')
		{
			name[firstName].push_back(lastName);
		}
		name[firstName].push_back(lastName);
	}
	for (auto n : name)
	{
		for (auto ve : n.second)
			std::cout << n.first << "." << ve << " ";
		std::cout << std::endl;
	}
	system("pause");
	return 0;
}