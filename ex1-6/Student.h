#include <iostream>

class Student
{
	//private:
	char name[20];
	int grade;
	int marks[10];
	float average;

	int sum();

public:
	void setGrade();
	int getGrade();
	void setMarks();
	void setAverage();
	float getAverage();

};

