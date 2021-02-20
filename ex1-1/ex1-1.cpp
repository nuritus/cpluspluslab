// שיעור 1 - דוגמא 1
// מחלקה למספרים רציונלים
//הגדרת עצם ומצביע לעצם, שימוש באופרטורי נקודה וחץ
//Lesson 1 - Example 1
//Class - Rational Numbers
//Defining an object and a pointer to an object,
//Using a pointand using an arrow to access an object's attributes

#include <iostream>
using namespace std;

class Rational
{
public:
	int numerator; //מונה
	int denominator;// מכנה
};

int main() {
	Rational  num1, num2;
	Rational* pNum = new Rational;

	num1.numerator = 2;
	num1.denominator = 4;

	num2.numerator = 3;
	num2.denominator = 6;

	pNum->numerator = 4;
	pNum->denominator = 8;

	cout << num1.numerator << '/' << num1.denominator << endl;
	cout << num2.numerator << '/' << num2.denominator << endl;
	cout << pNum->numerator << '/' << pNum->denominator << endl;


	return 0;
}
