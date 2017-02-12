#include <iostream>
#include <list>
#include <forward_list>

int main()
{
	char c;
	std::list<int> List;
	int a;
	std::forward_list<int> forwardLise;
	while (std::cin >> a && (c = getchar()) != '\n')
	{
		List.push_back(a);
	}
	List.push_back(a);
	std::forward_list<int>::iterator preBeg = forwardLise.before_begin();
	while (std::cin >> a && (c = getchar()) != '\n')
	{
		forwardLise.insert_after(preBeg, a);    //list和forward_list不提供加减，因为它们是非线性容器。
		std::advance(preBeg, 1);
	}
	forwardLise.insert_after(preBeg, a);
	for (auto beg = List.begin(); beg != List.end();)
	{
		if (*beg % 2)
		{
			beg = List.insert(beg, *beg);  //此时beg指向新添加的元素，因此此时迭代器需要再向前移动两次，才能指向下一个我们要处理的元素
			std::advance(beg, 2);
		}
		else
		{
			beg = List.erase(beg); //此时beg返回被删除的元素之后的元素的迭代器
		}
	}
	for (auto preBeg = forwardLise.before_begin(),beg = forwardLise.begin(); beg != forwardLise.end();)
	{
		if (*beg % 2)
		{
			beg = forwardLise.insert_after(preBeg, *beg);
			std::advance(preBeg, 2);
			std::advance(beg, 2);
		}
		else
		{
			beg = forwardLise.erase_after(preBeg);
		}
	}
	for (auto l : List)
		std::cout << l << " ";
	std::cout << std::endl;
	for (auto l : forwardLise)
		std::cout << l << " ";
	std::cout << std::endl;
	system("pause");
	return 0;
}