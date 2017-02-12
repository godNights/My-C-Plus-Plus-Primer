#include <vector>
#include <iostream>
#include <string>

int main()
{
	std::vector<std::string> vecStrng;
	std::string word;
	while (std::cin >> word)
	{
		bool b = true;
		for (auto vec : vecStrng)
		{
			if (vec == word)
			{
				b = false;
				break;
			}
		}
		if (b == true)
			vecStrng.push_back(word);
	}
	for (auto vec : vecStrng)
		std::cout << vec << std::endl;
	system("pause");
	return 0;
}