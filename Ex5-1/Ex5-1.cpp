//שיעור 5  דוגמא 1
//הבחנה בין lvalue rvalue

#include <iostream>
using namespace std;

class Rational
{
	int numerator;
	int denominator;
public:
	Rational(int myn=0, int myd=1) { numerator = myn;  if (myd != 0) denominator = myd; else denominator = 1; }
	void set(int myn, int myd) { numerator = myn;  if (myd != 0) denominator = myd; else denominator = 1; }
	int getX() const{ return numerator; } //חובה לציין const
	int getY() const { return denominator; }

	friend istream& operator >>(istream& os, Rational& num);
};

ostream& operator<<(ostream& out, const Rational& rhs) //לא פונקציה חברה - אז חובה להשתמש בget
{
	out << rhs.getX() << "/" << rhs.getY();
	return out;
}


Rational& fun(Rational& v)
{
	cout << "v now: " << v << endl;
	v.set(1, 1);
	cout << "v now: " << v << endl;
	return v; // will be by reference although we didn't use now '&'
}

istream& operator>>(istream& is, Rational& num)//פונקציה חברה - אפשר לגשת ישירות לשדות
{
	char help; //עבור קלט של המקף
	is >> num.numerator;
	is >> help;
	is >> num.denominator;
	return is;
}

int main()
{
	Rational a(1, 2);
	Rational b = fun(a); // now a and b are equal
	cout << b << endl;;
	Rational c(5, 5);
	fun(b) = c; // does b effected??
	cout << a << endl << b << endl << c;

	return 0;
}
