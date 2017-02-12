#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<int> v1;
	cout << "v1包含" << v1.size() << "个元素,分别为:";
	for (auto c : v1)
		cout << c << " ";
	cout << endl;
	vector<int> v2(10);
	cout << "v2包含" << v2.size() << "个元素,分别为:";
	for (auto c : v2)
		cout << c << " ";
	cout << endl;
	vector<int> v3(10, 42);
	cout << "v3包含" << v3.size() << "个元素,分别为:";
	for (auto c : v3)
		cout << c << " ";
	cout << endl;
	vector<int> v4{ 10 };
	cout << "v4包含" << v4.size() << "个元素,分别为:";
	for (auto c : v4)
		cout << c << " ";
	cout << endl;
	vector<int> v5{ 10, 42 };
	cout << "v5包含" << v5.size() << "个元素,分别为:";
	for (auto c : v5)
		cout << c << " ";
	cout << endl;
	vector<string> v6{ 10 };
	cout << "v6包含" << v6.size() << "个元素,分别为:";
	for (auto c : v6)
		cout << c << " ";
	cout << endl;
	vector<string> v7{ 10, "hi" };
	cout << "v7包含" << v7.size() << "个元素,分别为:";
	for (auto c : v7)
		cout << c << " ";
	cout << endl;
	system("pause");
	return 0;
}