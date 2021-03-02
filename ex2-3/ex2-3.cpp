// שיעור 2 - דוגמא 3
// מחלקה של וקטור- מערך בסיסית
//העמסת פונקציות במחלקה

#include "Vector.h"
#include <iostream>
using namespace std;

int main()
{
	Vector v1;
	int sum = v1.add();//זימון העמסה ראשונה
	cout << sum << endl;
	v1.print();
	v1.add(1);//זימון העמסה שניה
	v1.print();
	v1.add(8, 8);//זימון העמסה שלישית
	v1.print();

	return 0;
}