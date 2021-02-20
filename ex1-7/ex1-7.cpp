// שיעור 1 - דוגמא 7
// מחלקה להגדרת תלמיד
// כיצד פועל הקדם מעבד
//Lesson 1 - Example 7
//Class - Student
//How to use the preprocessor

#include <iostream> 
#include <iostream> 
#include "Student.h" 
#include "Student.h" 


using namespace std;

int main()
{
	cout << "It's work!!" << endl << endl;
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