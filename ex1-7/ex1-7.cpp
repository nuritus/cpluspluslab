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
	

	me.setGrade();

	cout << me.getGrade() << endl;

	me.setMarks();
	
	cout << me.getAverage() << endl;

	return 0;
}