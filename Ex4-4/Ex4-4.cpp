//����� 4  ����� 4
//������� ��� �������� ���

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

	//friend istream& operator>>(istream& os, Rational &num); //���� �� ����� ������ �����

};

ostream& operator<<(ostream& os, Rational num) {
	os << num.numerator;
	os << '/';
	os << num.denominator;
	//os << endl;
	return os; 
}

istream& operator>>(istream& is, Rational num) {
	char help; //���� ��� �� ����
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