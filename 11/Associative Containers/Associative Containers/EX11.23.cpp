#include <map>
#include <iostream>
#include <string>

int main()
{
	std::multimap<std::string, std::string> name;
	std::string firstName, lastName;
	while (std::cin >> firstName >> lastName)
		name.insert({ firstName, lastName });
	for (auto n : name)
		std::cout << n.first << " " << n.second << std::endl;
	system("pause");
	return 0;
}