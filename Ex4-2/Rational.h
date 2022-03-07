#pragma once
//Rational.h
#include <iostream>
using namespace std;
class Rational
{
    int numerator;    int denominator;
public:
    Rational(int mynumerator = 1, int mydenominator = 1) :numerator(mynumerator), denominator(mydenominator) {}
    Rational(const Rational& num) :numerator(num.numerator), denominator(num.denominator) {}
    void setnumerator(int mynumerator) { numerator = mynumerator; }
    void setdenominator(int mydenominator) { denominator = mydenominator; }
    int getnumerator() const { return numerator; }
    int getdenominator() const { return denominator; }
    void operator*=(Rational);
    Rational operator*(const Rational& num) const;
    Rational operator+(const Rational& num) const;
    Rational  operator + (const int num) const; //פונקציה אחרת

    Rational operator-(const Rational& num) const;
    Rational operator/(const Rational& num) const;
    bool operator==(const Rational&) const;
    Rational& operator=(const Rational&);
    Rational& operator++();
    Rational operator++(int);
    Rational operator--();
    Rational operator--(int);
    void print() const { cout << numerator << '/' << denominator << endl; }

   // friend Rational operator+ (const int num1, const Rational& num2);
};



