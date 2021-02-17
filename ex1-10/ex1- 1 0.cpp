// שיעור 1 - דוגמא 10
// מחלקת נקודה
// החזרת עצם ממתודה

#include <iostream>
using namespace std;

class Rational {
public:
	Rational(int num, int denom) { numerator = num; denominator = denom; }

	Rational square();
	void print() { cout << numerator << '/' << denominator << endl; }

private:
	int numerator;
	int denominator;
};

Rational Rational::square()
{
	// int numerator; //legal
	return Rational(numerator * numerator, denominator * denominator);//זימון בנאי תוך כדי ההחזרה. אין צורך בשם לעצם שנבנה כך
}

int main() {
	Rational num1(3, 4), num2(5, 6);

	num1.print();
	num1.square().print();//הפעלת מתודה על העצם החוזר

	return 0;
}
