// שיעור 1 - דוגמא 2
// מחלקה למספרים רציונלים
// הגדרה ושימוש בפעולות של עצם. שימוש בתכונות בתוך מתודה וזיהוי של this
//Lesson 1 - Example 2
//Class - Rational Numbers
//Defining and using an object's methods.  
//Defining and using an object's attributes inside a method.
//Understanding the usage of "this".

#include <iostream>
using namespace std;

class Rational {
public:
	int numerator;
	int denominator;

	void print()
	{
		cout << numerator << '/' << denominator << endl;
	}
};

int main() {
	Rational  num1, num2;
	num1.numerator = 2;
	num1.denominator = 4;

	num2.numerator = 3;
	num2.denominator = 6;

	num1.print();
	num2.print();

	Rational* num3 = new Rational();
	num3->

	return 0;
}
