#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<string> v;
	string word;
	while (cin >> word)
	{
		v.push_back(word);
	}
	auto a = v.cbegin();
	int repeat_times = 1, max_repeat_times = 1;
	string max_repeat_word, reword;
	while (a != v.cend() && !v.empty())
	{
		if (*a == reword)
		{
			++repeat_times;
			if (max_repeat_times < repeat_times)
			{
				max_repeat_word = *a;
				max_repeat_times = repeat_times;
			}
		}
		else
		{
			repeat_times = 1;
			reword = *a;
		}
		++a;
	}
	if (max_repeat_times == 1)
		cout << "No consecutive words found" << endl;
	else
	{
		cout << "the word: " << max_repeat_word << " occurred " << max_repeat_times << " times" << endl;
	}
	system("pause");
	return 0;
}