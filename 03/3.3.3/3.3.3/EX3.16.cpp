#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<int> v1;
	cout << "v1����" << v1.size() << "��Ԫ��,�ֱ�Ϊ:";
	for (auto c : v1)
		cout << c << " ";
	cout << endl;
	vector<int> v2(10);
	cout << "v2����" << v2.size() << "��Ԫ��,�ֱ�Ϊ:";
	for (auto c : v2)
		cout << c << " ";
	cout << endl;
	vector<int> v3(10, 42);
	cout << "v3����" << v3.size() << "��Ԫ��,�ֱ�Ϊ:";
	for (auto c : v3)
		cout << c << " ";
	cout << endl;
	vector<int> v4{ 10 };
	cout << "v4����" << v4.size() << "��Ԫ��,�ֱ�Ϊ:";
	for (auto c : v4)
		cout << c << " ";
	cout << endl;
	vector<int> v5{ 10, 42 };
	cout << "v5����" << v5.size() << "��Ԫ��,�ֱ�Ϊ:";
	for (auto c : v5)
		cout << c << " ";
	cout << endl;
	vector<string> v6{ 10 };
	cout << "v6����" << v6.size() << "��Ԫ��,�ֱ�Ϊ:";
	for (auto c : v6)
		cout << c << " ";
	cout << endl;
	vector<string> v7{ 10, "hi" };
	cout << "v7����" << v7.size() << "��Ԫ��,�ֱ�Ϊ:";
	for (auto c : v7)
		cout << c << " ";
	cout << endl;
	system("pause");
	return 0;
}