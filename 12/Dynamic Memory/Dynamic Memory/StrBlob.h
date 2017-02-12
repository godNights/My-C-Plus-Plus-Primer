#ifndef STRBLOB_H
#define STRBLOB_H

#include <vector>
#include <memory>
#include <string>
#include <initializer_list>
#include <exception>


class StrBlolStr;
class StrBlob
{
	friend StrBlolStr;
private:
	std::shared_ptr<std::vector<std::string>> date;
	void check(std::vector<std::string>::size_type size, std::string const &msg) const;
public:
	StrBlob() : date(std::make_shared<std::vector<std::string>>()) {};
	StrBlob(std::initializer_list<std::string> l) : date(std::make_shared<std::vector<std::string>>(l)) {};
	bool isEmpty() { return date->empty(); }
	const std::vector<std::string>::size_type size() { return date->size(); }
	const std::string& front() const;
	const std::string& back() const;
	void push_back(const std::string &s) { date->push_back(s); }
	void pop_back() { date->pop_back(); } //删除最后一个vector
	StrBlolStr begin() const;
	StrBlolStr end() const;
};

class StrBlolStr
{
private:
	std::weak_ptr<std::vector<std::string>> wptr;
	size_t curr;
	std::shared_ptr<std::vector<std::string>> check(size_t size, const std::string &msg) const;
public:
	StrBlolStr() : curr(0) {}
	StrBlolStr(const StrBlob &s, size_t st = 0 ) : wptr(s.date), curr(st) {}
	const std::string deref() const;
	StrBlolStr &inch();
	bool operator!=(StrBlolStr &s) { return s.curr != this->curr; }
};

void StrBlob::check(std::vector<std::string>::size_type size, std::string const &msg) const
{
	if (size >= date->size())
		throw std::out_of_range(msg);
}

const std::string& StrBlob::front() const
{
	check(0, "front on empty StrBlob");
	return date->front();
}

const std::string& StrBlob::back() const
{
	check(0, "back on empty StrBlob");
	return date->back();
}

StrBlolStr StrBlob::begin() const
{
	return StrBlolStr(*this);
}
StrBlolStr StrBlob::end() const
{
	auto p = StrBlolStr(*this, date->size());
	return p;
}

std::shared_ptr<std::vector<std::string>> StrBlolStr::check(size_t size, const std::string &msg) const
{
	auto ret = wptr.lock();
	if (!ret)
		throw std::runtime_error("unbound StrBlobStr");
	else if (size >= ret->size())
		throw std::out_of_range(msg);
	else
		return ret;
}

const std::string StrBlolStr::deref() const
{
	auto p = check(curr, "Operation error");
	return (*p)[curr];
}

StrBlolStr &StrBlolStr::inch()
{
	auto p = check(curr, "Operation error");
	++curr;
	return *this;
}

#endif  STRBLOB_H
