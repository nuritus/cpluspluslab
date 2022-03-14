//שיעור 5  דוגמא 6
//פונקציה סטטית
//לא יכולה לגשת לשדות


#include"Student.h"
using namespace std;

int main()
{
	int i = Student::SomeStaticFunc();
	Student* c = new Student;
	cout << c->n << endl;
	cout << c->SomeStaticFunc() << endl;
	delete c;
	cout << Student::n << endl;
	Student s1;
	s1.SomeStaticFunc();
	Student::SomeStaticFunc();
	return 0;
}
