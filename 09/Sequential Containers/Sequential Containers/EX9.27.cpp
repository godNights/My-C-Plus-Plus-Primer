#include <iostream>
#include <forward_list>

int main()
{
	std::forward_list<int> fListe;
	int a;
	auto preBeg = fListe.before_begin();
	while (std::cin >> a)
	{
		fListe.insert_after(preBeg, a);
	}
	preBeg = fListe.before_begin();
	for (std::forward_list<int>::iterator beg = fListe.begin(); beg != fListe.end();)
	{
		if (*beg % 2)
			beg = fListe.erase_after(preBeg);
		else
			preBeg = beg++;
	}
	for (auto c : fListe)
		std::cout << c << " ";
	std::cout << std::endl;
	system("pause");
	return 0;
}