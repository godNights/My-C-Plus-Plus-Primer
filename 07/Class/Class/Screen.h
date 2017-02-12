//#ifndef SCREEN_H
//#define SCREEN_H

#include <string>
#include <ostream>
#include <vector>


class Window_mgr
{
private:
	std::vector<Screen> screen{ Screen(80, 60, ' ') };
public:
	using screenIndex = std::vector<Screen>::size_type;
	void clear(screenIndex);
	screenIndex addScreen(const Screen &);
};

class Screen
{
	friend void Window_mgr::clear(screenIndex);
public:
	using pos = std::string::size_type;
private:
	pos height = 0, width = 0;
	pos cursor = 0;
	std::string contents;
	void do_display(std::ostream &os) const { os << contents; }
public:
	Screen() = default;
	Screen(pos ht, pos wh) : height(ht), width(wh), contents(ht * wh, ' ') {}
	Screen(pos ht, pos wh, char c) : height(ht), width(wh), contents(ht * wh, c) {}
	char get() const { return contents[cursor]; }
	inline char get(pos, pos) const;
	inline Screen &move(const pos &, const pos &);
	inline Screen &set(char c);
	inline Screen &set(pos, pos, char );
	inline Screen &display(std::ostream &);
	inline const Screen &display(std::ostream &) const;
	inline pos size() const;
};
inline char Screen::get(pos r, pos c) const
{
	pos row = r * width;
	return contents[row + c];
}

inline Screen &Screen::move(const pos &r, const pos &c)
{
	cursor = r * width + c;
	return *this;
}

inline Screen &Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}
inline Screen &Screen::set(pos r, pos c, char ch)
{
	pos row = r * width;
	contents[row + c] = ch;
	return *this;
}
inline Screen &Screen::display(std::ostream &os)
{
	do_display(os);
	return *this;
}
inline const Screen &Screen::display(std::ostream &os) const
{
	do_display(os);
	return *this;
}

void Window_mgr::clear(screenIndex i)
{
	if (i >= screen.size())
		return ;
	else
	{
		Screen &s = screen[i];
		s.contents = std::string(s.height * s.width, ' ');
	}
}

Window_mgr::screenIndex Window_mgr::addScreen(const Screen &s)
{
	screen.push_back(s);
	return screen.size() - 1;
}

Screen::pos Screen::size() const
{
	return height * width;
}

//#endif

