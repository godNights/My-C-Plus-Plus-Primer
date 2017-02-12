#include <cstring>
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	const char s1[] = "Hello!";
	const char s2[] = "World.";
	constexpr size_t leng = sizeof(s1) + sizeof(s2);
	char s3[leng];
	strcpy_s(s3, s1);
	strcat_s(s3, s2);
	cout << s1 << endl
		<< s2 << endl
		<< s3 << endl;
	system("pause");
	return 0;
}