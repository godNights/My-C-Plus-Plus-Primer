#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <istream>
#include <ostream>

class Person;
std::istream &read(std::istream &, Person &);
std::ostream &print(std::ostream &, Person &);
class Person
{
	friend std::istream &read(std::istream &, Person &);
	friend std::ostream &print(std::ostream &, Person &);
private:
	std::string name;
	std::string address;
public:
	const std::string &getName() const { return name; }
	const std::string &getAddress() const { return address; }
	Person() = default;
	Person(const std::string &na, const std::string &ad) : name(na), address(ad) {}
	Person(std::istream &is) { read(is, *this); }
};

std::istream &read(std::istream &is, Person &data)
{
	is >> data.name >> data.address;
	return is;
}

std::ostream &print(std::ostream &os, const Person &data)
{
	os << data.getName() << data.getAddress();
	return os;
}
#endif