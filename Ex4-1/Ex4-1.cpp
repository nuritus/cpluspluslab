//שיעור 4  דוגמא 1
//פונקציה חברה

#include <iostream>
using namespace std;

class Rational
{
private:
	int numerator;
	int denominator;

public:
	//constructor
	Rational(int numerator = 1, int denominator = 1) :
		numerator(numerator), denominator(denominator)
	{}
	Rational(Rational& num) : numerator(num.numerator), denominator(num.denominator) {}

	//modify functions
	void setnumerator(int Numerator) { numerator = Numerator; }
	void setdenominator(int Denominator) { denominator = Denominator; }

	//getter function
	int getNumerator() { return numerator; }
	int getDenominator() { return denominator; }

	//friend  void print(Rational r);

};

void print(Rational r) //פונקציה גלובלית
{
	cout << r.numerator << " / " << r.denominator;

	//cout << r.getNumerator() << " / " << r.getDenominator();
}

void main()
{
	Rational num(3, 7);
	print(num);
}

