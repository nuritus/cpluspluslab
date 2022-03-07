#pragma once
class Rational
{
	//private:
	int numerator;
	int denominator;
public:
	//constructor
	Rational(int num =1, int denom=1);
	void print();

	//operators
	bool operator==(const Rational& num) const;
	bool operator != (const Rational& num) const;
	Rational operator+(const Rational& num) const;
	Rational operator*(const Rational& num) const;
	Rational& operator+=(const Rational& num);
	Rational& operator = (const Rational& num);


	Rational operator+(int num) const;
	Rational& operator++();//prefix
	Rational operator++(int notused);//postfix




}; 
