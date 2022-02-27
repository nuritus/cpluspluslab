#include "Rational.h"
#include <iostream>
using namespace std;

Rational::Rational(int num, int denom) { numerator = num; denominator = denom; }

void Rational::print() { cout << numerator << '/' << denominator << endl; }

bool Rational::operator==(const Rational& num) const
{
	return (numerator == num.numerator && denominator == num.denominator);
}

bool Rational::operator != (const Rational& num) const
{
	return !(*this == num);  //כבר העמסנו==...
}

Rational Rational::operator+(const Rational& num) const
{
	int newNumerator = numerator * num.denominator + num.numerator * denominator;
	int newDenominator = denominator * num.denominator;
	Rational temp(newNumerator, newDenominator);
	return temp;
}

Rational Rational::operator*(const Rational& num) const
{
	int newNumerator = numerator * num.numerator;
	int newDenominator = denominator * num.denominator;
	return Rational(newNumerator, newDenominator);
}

Rational& Rational::operator+=(const Rational& num) //לא void לצורך שרשור
{
	(*this) = (*this) + num;
	return *this;
	//NO call to copy ctor. 
	//function returning a reference to 
	//Rational which pointed to *this.
}

Rational& Rational::operator = (const Rational& num)
{
	numerator = num.numerator;
	denominator = num.denominator;
	return *this;
}

Rational Rational::operator+(int num) const
{
	int newnumerator = numerator * (num * denominator);
	return Rational(newnumerator, denominator);
}

Rational& Rational::operator++()//prefix
{
  numerator = numerator + denominator;
  return *this;
}

Rational Rational::operator++(int notused)//postfix
{
  Rational temp(numerator,denominator);
  numerator += denominator;
  return temp;
}






