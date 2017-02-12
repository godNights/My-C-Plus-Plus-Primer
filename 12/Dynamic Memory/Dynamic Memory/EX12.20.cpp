#include "StrBlob.h"
#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::ifstream is("test.txt");
	if (is)
	{
		StrBlob stb;
		std::string word;
		while (is >> word)
			stb.push_back(word);
		for (StrBlolStr beg(stb.begin()), end(stb.end()); beg != end; beg.inch())
			std::cout << beg.deref() << " ";
		std::cout << std::endl;
	}
	else
	{
		std::cerr << "No related documents found" << std::endl;
		return -1;
	}
	system("pause");
	return 0;
}