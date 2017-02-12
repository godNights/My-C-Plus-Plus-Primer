#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<int> v1;
	cout << "v1�й���" << v1.size() << "��Ԫ�أ��ֱ�Ϊ��";
	for (auto beg = v1.cbegin(), end = v1.cend(); beg != end; ++beg)
	{
		cout << *beg << " ";
	}
	cout << endl;
	vector<int> v2(10);
	cout << "v2�й���" << v2.size() << "��Ԫ�أ��ֱ�Ϊ��";
	for (auto beg = v2.cbegin(), end = v2.cend(); beg != end; ++beg)
	{
		cout << *beg << " ";
	}
	cout << endl;
	vector<int> v3(10, 42);
	cout << "v3�й���" << v3.size() << "��Ԫ�أ��ֱ�Ϊ��";
	for (auto beg = v3.cbegin(), end = v3.cend(); beg != end; ++beg)
	{
		cout << *beg << " ";
	}
	cout << endl;
	vector<int> v4{ 10 };
	cout << "v4�й���" << v4.size() << "��Ԫ�أ��ֱ�Ϊ��";
	for (auto beg = v4.cbegin(), end = v4.cend(); beg != end; ++beg)
	{
		cout << *beg << " ";
	}
	cout << endl;
	vector<int> v5{ 10,42 };
	cout << "v5�й���" << v5.size() << "��Ԫ�أ��ֱ�Ϊ��";
	for (auto beg = v5.cbegin(), end = v5.cend(); beg != end; ++beg)
	{
		cout << *beg << " ";
	}
	cout << endl;
	vector<string> v6{ 10 };
	cout << "v6�й���" << v6.size() << "��Ԫ�أ��ֱ�Ϊ��";
	for (auto beg = v6.cbegin(), end = v6.cend(); beg != end; ++beg)
	{
		cout << *beg << " ";
	}
	cout << endl;
	vector<string> v7{ 10, "hi" };
	cout << "v7�й���" << v7.size() << "��Ԫ�أ��ֱ�Ϊ��";
	for (auto beg = v7.cbegin(), end = v7.cend(); beg != end; ++beg)
	{
		cout << *beg << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}