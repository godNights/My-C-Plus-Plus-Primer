class Debug
{
private:
	bool hw;
	bool io;
	bool other;
public:
	Debug() = default;
	constexpr Debug(bool h, bool i, bool o) : hw(h), io(i), other(o) {}
	constexpr Debug(bool b) : hw(b), io(b), other(b) {}
	constexpr bool any() { return hw || io || other; }
	void set_hw(bool h) { hw = h; }
	void set_io(bool i) { io = i; }
	void set_other(bool o) { other = o; }
};
