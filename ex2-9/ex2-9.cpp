// שיעור 2 - דוגמא 9
// מחלקת סטודנט עם הקצאה דינמית
//העתקה עמוקה לעומת רדודה

#include "Student.h"

int main()
{
	Student a(10, 20);
	Student b(a);
	a.stam1(b);
	b.stam1(a);
	return 0;
}