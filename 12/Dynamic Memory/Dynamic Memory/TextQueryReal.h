#ifndef TEXTQUERYREAL_H
#define TEXTQUERYREAL_H

#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <memory>
#include <set>
#include <map>


class TextResult
{
public:
	friend std::ostream &print(std::ostream &, const TextResult &);
	using lineNo = std::vector<std::string>::size_type;
private:
	std::shared_ptr<std::set<lineNo>> lines; //���ʳ��ֵ��к�
	std::string sought;  //Ҫ��ѯ�ĵ���
	std::shared_ptr<std::vector<std::string>> file;		//�����ļ������з���
public:
	TextResult(const std::shared_ptr<std::set<lineNo>> &l,
		const std::string &s,
		const std::shared_ptr<std::vector<std::string>> &f) :
		lines(l), sought(s), file(f) {}
	std::set<lineNo>::iterator begin() { return lines->begin(); }
	std::set<lineNo>::iterator end() { return lines->end(); }
	std::shared_ptr<std::vector<std::string>> get_file() { return this->file; }
};

class TextQuery
{
private:
	std::shared_ptr<std::vector<std::string>> file;  //�����ļ������з���
	std::map<std::string, std::shared_ptr<std::set<TextResult::lineNo>>> wm; //���ʺ�������map
public:
	TextQuery(std::ifstream &);
	TextResult query(const std::string &) const;  //��ѯ����
};

TextQuery::TextQuery(std::ifstream &is) : file(new std::vector<std::string>)
{
	std::string line;
	while (std::getline(is, line))
	{
		file->push_back(line);
		std::istringstream iss(line);
		std::string word;
		unsigned lineNumber = file->size() - 1;
		while (iss >> word)
		{
			auto &lines = wm[word];
			if (!lines)
				lines.reset(new std::set<TextResult::lineNo>);
			lines->insert(lineNumber);
		}
	}
}

TextResult TextQuery::query(const std::string &word) const
{
	static std::shared_ptr<std::set<TextResult::lineNo>> noFind(new std::set<TextResult::lineNo>);
	auto findNumber = wm.find(word);
	if (findNumber != wm.end())
		return TextResult(findNumber->second, word, file);
	else
		return TextResult(noFind, word, file);
}

/*����time���������������������1ʱ���times���������time*/
std::string plural(std::string::size_type sz, const std::string &word, const std::string &s)
{
	if (sz > 1)
		return word + s;
	else
		return word;
}

std::ostream &print(std::ostream &os, const TextResult &tr)
{
	os << tr.sought << " occurs " << tr.lines->size() << plural(tr.lines->size(), "time", "s") << std::endl;
	for (auto line : *tr.lines)
		os << "(line:" << line + 1 << ") " << *(tr.file->begin() + line) << std::endl;
	return os;
}


#endif
