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
				std::cout << val << "出现了" << cnt << "次" << std::endl;
				cnt = 1;
				val = currval;
			}
		}
		std::cout << val << "出现了" << cnt << "次" << std::endl;
	}
	else
		std::cout << "请输入一个整数" << std::endl;
	system("pause");
	return 0;
}