//שיעור 3  דוגמא 7
//העמסת אופרטורים

#include "Rational.h"

void main()
{
	Rational r1(2, 4);
	Rational r2(r1);
	Rational r3(3, 4);
	Rational r4;

	r4 = r1 + r2 + r3; //r1 = r1.operator+(rs)...;
	r1 += r2 += r3;

}