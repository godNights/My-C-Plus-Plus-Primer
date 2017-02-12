#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <istream>
#include <iostream>

class Sales_data;
std::istream &read(std::istream &, Sales_data &);
std::ostream &print(std::ostream &, const Sales_data &);

class Sales_data
{
	friend std::istream &read(std::istream &, Sales_data &);
	friend std::ostream &print(std::ostream &, const Sales_data &);
private:
	std::string bookNo;            //ISBN编号
	unsigned units_sold = 0;	   //某本书的销量
	double revenue = 0.0;		   //总销售收入
public:
	std::string isbn() const { return bookNo; }
	Sales_data &combine(const Sales_data &);
	double avg_price() const;
	Sales_data() = default;
	Sales_data(const std::string &b) : Sales_data(b, 0, 0) { std::cout << "delegating Constructor" << std::endl; }
	Sales_data(const std::string &b, unsigned u, double r) : bookNo(b), units_sold(u), revenue(r) {	std::cout << "Constructor" << std::endl;}
	explicit Sales_data(std::istream &is) { read(is, *this); }
};
Sales_data &Sales_data::combine(const Sales_data &rhs)
{
	this->units_sold += rhs.units_sold;
	this->revenue += rhs.revenue;
	return *this;
}

inline double Sales_data::avg_price() const
{
	if (units_sold)
		return revenue / units_sold;
	else
		return 0;
}
std::istream &read(std::istream &is, Sales_data &item)
{
	double price = 0.0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = item.units_sold * price;
	return is;
}
std::ostream &print(std::ostream &os, const Sales_data &item)
{
	os << item.bookNo << " " << item.units_sold << " "
		<< item.revenue << " " << item.avg_price();
	return os;
}
#endif