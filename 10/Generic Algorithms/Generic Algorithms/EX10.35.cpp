#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vecInt{ 0, 1, 2, 3, 4, 5, 6, 7 };
	//���ܷ��� begin()ǰ�ĵ�����������ᱨ��
	for (std::vector<int>::const_iterator rbeg = vecInt.cend(); std::distance(vecInt.cbegin(), rbeg) > 0;)
	{
		--rbeg;
		std::cout << *rbeg << " ";
	}
	std::cout << std::endl;
	system("pause");
	return 0;
}


