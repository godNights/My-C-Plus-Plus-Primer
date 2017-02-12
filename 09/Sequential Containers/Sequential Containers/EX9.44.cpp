#include <iostream>
#include <string>

void replace(std::string &s, const std::string &oldVal, const std::string &newVal)
{
	for (std::string::size_type i = 0; i != s.size(); ++i)
	{
		if (s.substr(i, oldVal.size()) == oldVal)
		{
			s.replace(i, oldVal.size(), newVal);
			i += newVal.size() - 1;
		} 
	}
}

int main()
{
	std::string s, oldVal, newVal;
	while (std::getline(std::cin, s))
	{
		std::cin >> oldVal >> newVal;
		replace(s, oldVal, newVal);
		std::cout << s << std::endl;
	}
	system("pause");
	return 0;
}