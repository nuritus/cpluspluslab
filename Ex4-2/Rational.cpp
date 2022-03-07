//Rational.cpp
#include "Rational.h"

void Rational::operator*=(Rational num)
{
    setnumerator(numerator * num.getnumerator());
    setdenominator(denominator * num.getdenominator());
}

Rational Rational::operator*(const Rational& num) const
{
    Rational tmp;
    tmp.setnumerator(numerator * num.getnumerator());
    tmp.setdenominator(denominator * num.getdenominator());
    return tmp;
}
Rational Rational::operator+(const Rational& num) const
{
    Rational tmp;
    tmp.setnumerator(numerator * num.getdenominator() +
        num.getnumerator() * denominator);
    tmp.setdenominator(denominator * num.getdenominator());
    return tmp;
}
Rational& Rational::operator=(const Rational& num)
{
    numerator = num.getnumerator();
    denominator = num.getdenominator();
    return *this;
}

bool Rational::operator==(const Rational& num) const
{
    return (numerator == num.numerator && denominator ==
        num.denominator);
}

Rational& Rational::operator++()
{
    numerator += denominator;
    return *this;
}

Rational Rational::operator++(int u)
{
    Rational temp = *this;
    numerator += denominator;
    return temp;
}

Rational  Rational :: operator + (const int num) const
{
    Rational tmp;
    tmp.numerator = numerator + num * denominator;
    tmp.denominator = denominator;
    return tmp;
}

Rational operator+ (const int num1, const Rational& num2)//פונקציה גלובלית. בכל זאת כתובה בקובץ זה
{
    Rational tmp;
    tmp.numerator = num1 * num2.denominator + num2.numerator;
    tmp.denominator = num2.denominator;
    return tmp;
}