//שיעור 5  דוגמא 7
//מחלקת שירות
//מכילה רק מתודות סטטיות


#include <iostream>
using namespace std;

class Calculator {
public:
	static int add(int, int);
	static int sub(int, int);
	static int mult(int, int);
	static float div(int, int);
};

int Calculator::add(int a, int b) {
	return a + b;
}
int Calculator::sub(int a, int b) {
	return a - b;
}
int Calculator::mult(int a, int b) {
	return a * b;
}
float Calculator::div(int a, int b) {
	if (!b)  throw "cannot divid by zero\n"; //זה שייך להמשך השיעור
	return (float)a / b;
}

enum options {
	STOP, ADD, SUB, MULT, DIV
};

int main() {
	int op, x, y;
	cout << "enter your choice\n";
	cin >> op;
	while (op) {
		cout << "enter 2 values\n";
		cin >> x >> y;
		switch (op) {
		case ADD:
			cout << x << '+' << y << '=';
			cout << Calculator::add(x, y) << endl;
			break;
		case SUB:
			cout << x << '-' << y << '=';
			cout << Calculator::sub(x, y) << endl;
			break;
		case MULT:
			cout << x << '*' << y << '=';
			cout << Calculator::mult(x, y) << endl;
			break;
		case DIV:
			try {
				float z = Calculator::div(x, y);
				cout << x << '/' << y << '=' << z << endl;
			}
			catch (char* msg) {
				cout << msg;
			}
			break;
		default: cout << "no such option\n";
		};
		cout << "enter your choice\n";
		cin >> op;
	}
}