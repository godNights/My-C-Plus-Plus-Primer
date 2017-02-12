#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main()
{
	std::ifstream in("F:\\WarcraftIII 1.26a\\bnupdate.log"); 
	if (in)
	{
		std::vector<std::string> v;
		std::string s;
		while (std::getline(in, s))
			v.push_back(s);
		for (std::vector<std::string>::const_iterator beg = v.cbegin(), end = v.cend(); beg != end; ++beg)
			std::cout << *beg;
		std::cout << std::endl;
	}
	else
	{
		std::cout << "No related documents found!" << std::endl;
	}
	system("pause");
	return 0;
}