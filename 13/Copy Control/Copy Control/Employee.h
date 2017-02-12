#include <string>

class Employee
{
public:
	Employee(const std::string &n);
	Employee();
	Employee(const Employee &) = delete;
	Employee &operator=(const Employee &) = delete;
	const int id() { return this->IDNumber; }
private:
	std::string name;
	int IDNumber;
	static int increment;
};