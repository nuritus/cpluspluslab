// שיעור 1 - דוגמא 6
// מחלקה להגדרת תלמיד
// מה מתאים להיות שדה
//Lesson 1 - Example 6
//Class - Student
//Deciding what should and should not be a method's  attribute

#include <iostream> 
#include "Student.h" 


using namespace std;

int main()
{
	Student me;
	// me.grade=3;
	//ERROR: cannot access private member

	me.setGrade();
	// cout<<me.grade;
	//ERROR: cannot access private member

	cout << me.getGrade() << endl;

	me.setMarks();
	me.setAverage();
	cout << me.getAverage() << endl;

	return 0;
}