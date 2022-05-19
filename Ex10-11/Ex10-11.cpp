//שיעור 11  דוגמא 11
// ביטויי למבדה
//רשימת תפיסה

#include <iostream>
using namespace std;


int main() 
{
	int a = 1, b = 2;
	//cout << [](int x, int y) {return a + b + x + y; } (3, 4);


	cout << [a, b](int x, int y) {return a + b + x + y; }(3, 4);

	cout << [=](int x, int y) {return a + b + x + y; }(3, 4);

	cout << [&a, &b](int x, int y) {a++; b++; return a + b + x + y; }(3, 4);

	cout << [&](int x, int y) {a++; b++; return a + b + x + y; }(3, 4);

	cout << [=, &b](int x, int y) { b++; return a + b + x + y; }(3, 4);

	cout << [&, b](int x, int y) { a++; return a + b + x + y; }(3, 4);

	int i = 5;
	//cout << [i](int x) { return x + (++i); } (2);
	cout << [i](int x) mutable {return x + (++i); }(2);

}
