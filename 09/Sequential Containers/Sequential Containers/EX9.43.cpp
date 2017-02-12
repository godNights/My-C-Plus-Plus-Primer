#include <string>
#include <iostream>

void replace(std::string &s, const std::string &oldval, const std::string &newVal)
{
	std::string s1;
	for (auto nowPos = s.begin(); std::distance(nowPos, s.end()) >= oldval.size();)
	{
		if (s1.assign(nowPos, nowPos + oldval.size()) == oldval)
		{
			nowPos = s.erase(nowPos, nowPos + oldval.size());
			nowPos = s.insert(nowPos, newVal.begin(), newVal.end());
			std::advance(nowPos, newVal.size());
		}
		else
			++nowPos;
	}
}

int  main()
{
	std::string s, oldVal, newVal;
	std::getline(std::cin, s);
	std::cin >> oldVal >> newVal;
	replace(s, oldVal, newVal);
	std::cout << s << std::endl;
	system("pause");
	return 0;
}