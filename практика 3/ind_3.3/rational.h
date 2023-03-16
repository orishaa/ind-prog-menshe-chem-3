class rational {
private:
	int a, b;
public:
	rational();
	rational(int a1, int b1);
	void set(int a1, int b1);
	void show();
	rational operator + (rational& b);
	rational operator ++ ();
	friend rational operator - (rational& q, rational& p);
	bool operator == (rational& p);
	bool operator > (rational& p);
	rational& operator = (const rational& p);
};