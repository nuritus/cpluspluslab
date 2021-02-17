// שיעור 1 - דוגמא 8
// מחלקה למספרים רציונלים
// בנאי ובנאי ברירת מחדל

#include "Rational.h"


int main() {
	// Rational  num1; // ERROR: no default constructor
	Rational num1(1, 2), num2(3, 4), num3(5, 6);

	num1.print();
	num2.print();
	num3.print();

	return 0;
}
