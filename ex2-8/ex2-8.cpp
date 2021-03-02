// שיעור 2 - דוגמא 8
// מחלקת נקודה
//בנאי העתקה מפורש עם העתקה רדודה

#include "point.h"
#include <iostream>
using namespace std;

void main()
{
    point p1; //empty ctor
    point p2(2, 8); //ctor 2
    point p3(p2); //copy ctor

    cout << "p1: ";
    p1.print(); //0,0
    cout << "p2: ";
    p2.print(); //2,8
    cout << "p3: ";
    p3.print(); //2,8
}
