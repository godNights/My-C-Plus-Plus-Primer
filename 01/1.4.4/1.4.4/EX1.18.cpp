#include <iostream>

int main()
{
	int currval = 0, val = 0;
	if (std::cin >> val)
	{
		int cnt = 1;
		while (std::cin >> currval)
		{
			if (currval == val)
				++cnt;
			else
			{
				std::cout << val << "������" << cnt << "��" << std::endl;
				cnt = 1;
				val = currval;
			}
		}
		std::cout << val << "������" << cnt << "��" << std::endl;
	}
	else
		std::cout << "������һ������" << std::endl;
	system("pause");
	return 0;
}