//שיעור 5  דוגמא 4
//משנה סטטי במחלקה

#include <iostream>
using namespace std;

int func(const int& in) {
	static int tmp = 0;
	tmp += in;
	return tmp;
}

int main() {
	int f = 4;
	f = func(10);
	cout << f << endl;
	f = func(5);
	cout << f << endl;
	cout << tmp;
	return 0;
}


