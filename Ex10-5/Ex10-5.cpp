//שיעור 11  דוגמא 5
// מצביע לפונקציה

#include <iostream>
using namespace std;

void eql(int a, int b)
{
	if (a == b) 
		cout << "equal\n";
	else 
		cout << "not equal\n";
}
void main() {
	void (*p)(int, int); // יצירת המצביע
	p = eql; // הצבת הפונקציה כיעד ההצבעה
	p(4, 6); // שימוש במצביע כבפונקציה
}
