//#ifndef STUDENT_H

#define STUDENT_H //הגדר משתנה בשם זה


class Student
{
	//private:
	char name[20];
	int grade;
	int marks[10];
	

	int sum();

public:
	void setGrade();
	int getGrade();
	void setMarks();
	
	float getAverage();

};

//#endif // !STUDENT_H