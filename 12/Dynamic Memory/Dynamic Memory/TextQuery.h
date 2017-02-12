#ifndef TEXTQUERY_H
#define TEXTQUERY_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <fstream>
#include <sstream>
#include <algorithm>

class TextQuery
{
public:
	TextQuery() = default;
	void printLine(unsigned);
	void printWordNumber(const std::string &);
	void printTotal(std::ifstream &, const std::string &);
private:
	void transMap();
	void transVec(std::ifstream &);
	std::vector<std::string> realText;
	std::map<size_t, std::set<std::string>> noReText;
	unsigned computeTotalWord(const std::string &);
	unsigned wordAmount;
	unsigned nowLine;
};

void TextQuery::transVec(std::ifstream &is)
{
	realText.erase(realText.begin(), realText.end());
	std::string line;
	while (std::getline(is, line))
		realText.push_back(line);
}

void TextQuery::transMap()
{
	noReText.erase(noReText.cbegin(), noReText.cend());
	std::string word;
	unsigned n = 0;
	for (auto line : realText)
	{
		std::set<std::string> setStr;
		std::istringstream iss(line);
		while (iss >> word)
			setStr.insert(word);
		noReText.insert(std::pair<size_t, std::set<std::string>>(n, setStr));
		++n;
	}
}

unsigned TextQuery::computeTotalWord(const std::string &findWord)
{
	std::vector<std::string> vecWord;
	for (auto line : realText)
	{
		std::istringstream iss(line);
		std::string word;
		while (iss >> word)
			vecWord.push_back(word);
	}
	return std::count(vecWord.cbegin(), vecWord.cend(), findWord);
}

void TextQuery::printLine(unsigned line)
{
	std::cout << "(line " << line << ") " << realText.at(line - 1);
}

void TextQuery::printWordNumber(const std::string &findWord)
{
	std::cout << findWord << " occurs " << computeTotalWord(findWord) << " times ";
}

void TextQuery::printTotal(std::ifstream &is, const std::string &findWord)
{
	
	transVec(is);
	transMap();
	printWordNumber(findWord);
	std::cout << std::endl;
	int n = 1;
	for (auto line : noReText)
	{
		if (std::find(line.second.cbegin(), line.second.cend(), findWord) != line.second.cend())
		{
			printLine(n);
			std::cout << std::endl;
		}
		++n;
	}
}

#endif
