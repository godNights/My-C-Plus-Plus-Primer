#include <iostream>
#include <string>

std::string make_plural(size_t size, const std::string &word, const std::string &ending = "s")
{
	return (size > 1) ? word : (word + ending);
}

int main()
{
	std::cout << "singual: " << make_plural(1, "success", "es") << " "
		<< make_plural(1, "failure") << std::endl;
	std::cout << "plural: " << make_plural(2, "success", "es") << " "
		<< make_plural(2, "failure") << std::endl;
	system("pause");
	return 0;
}
