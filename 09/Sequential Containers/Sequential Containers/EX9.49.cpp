#include <iostream>
#include <string>
#include <fstream>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::ifstream;

int main()
{
	string ascender("bdfhijklt");
	string descender("gjpqy");
	ifstream is("test.txt");
	string word, maxWord;
	string::size_type pos1 = 0, pos2 = 0;
	if (is)
	{
		while (is >> word)
		{
			if ((pos1 = word.find_first_of(ascender)) == word.npos && (pos2 = word.find_first_of(descender)) == word.npos
				&& word.size() > maxWord.size())
				maxWord = word;
		}
		cout << maxWord << endl;
		system("pause");
		return 0;
	}
	else
	{
		std::cerr << "No relative documents found" << endl;
		return -1;
	}
}