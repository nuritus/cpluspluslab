//שיעור 11  דוגמא 7
// מצביע לפונקציה
//דוגמא זהה - שימוש בtypedef

#include <iostream>
using namespace std;

typedef int (*FUNC)(int, int);


int operation(int x, int y, FUNC funcToCall)
{
	int g;
	g = (*funcToCall)(x, y);
	return (g);

	//return funcToCall(x,y);
}

int addition(int a, int b)
{
	return (a + b);
}

int subtraction(int a, int b)
{
	return (a - b);
}


int main() {
	FUNC minus = subtraction;

	int a, b, c;
	a = operation(7, 5, addition);
	b = operation(10, a, subtraction);
	c = operation(100, b, minus);
	cout << a << " " << b << " " << c << endl;
	return 0;
}
