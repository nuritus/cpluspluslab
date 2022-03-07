//שיעור 4  דוגמא 4
//אופרטור קלט ואופרטוק פלט

#include <iostream>
using namespace std;

class Rational
{
	int numerator;
	int denominator;
public:
	Rational(){}
	friend ostream& operator<<(ostream& os, Rational num);
	friend istream& operator>>(istream& os, Rational num);

	//friend istream& operator>>(istream& os, Rational &num); //שימו לב לצורך במשתנה הפניה

};

ostream& operator<<(ostream& os, Rational num) {
	os << num.numerator;
	os << '/';
	os << num.denominator;
	//os << endl;
	return os; 
}

istream& operator>>(istream& is, Rational num) {
	char help; //עבור קלט של המקף
	is >> num.numerator;
	is >> help;
	is >> num.denominator;
	return is;
}

int main()
{
	Rational num;
	cin >> num;
	cout << "We did it! " << num << "!!!\n";
}