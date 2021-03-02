#pragma once

#include <iostream >
using namespace std;
class Rational
{
	int numerator = 1;
	int denominator = 1;
public:
	//Rational(); //בנאי זה לא ניתן לכתוב אם יש ערכי ברירת מחדל לבנאי הפרמטר
	Rational(int myDenominator, int myNumerator);

	void print() { cout << numerator << "/" << denominator << '\n'; }
};

Rational::Rational(int myNumerator = -8, int myDenominator = 4) //אופציה ראשונה - שימוש בערכי ברירת מחדל
	: numerator(myNumerator)
{
	denominator = myDenominator;
}

//Rational::Rational() //אופציה שניה - שימוש באיתחול בשורת ההצהרה
//	:denominator(4), numerator(-8) //אתחול לפי הסדר של הצהרת השדות
//{ 
//	 
//}

//Rational::Rational() //אופציה שלישית - שילוב
//	:denominator(4)
//{ 
//	denominator = 0; //שימו לב כמה טלטלות עבר השדה הזה
//	numerator = -8; 
//}

