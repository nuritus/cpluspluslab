#pragma once
class Student
{
	int id;
	int* pGrade; // dynamic field

public:

	Student(int _id, int _grade); //ctor
	//Student(const Student& source); //copy ctor
	~Student(); //dtor

	void stam1(Student x);
};

Student::Student(int _id, int _grade) : id(_id)
{
	pGrade = new int;
	*pGrade = _grade;
};

//Student::Student(const Student& source)
//{
//	id = source.id;
//	pGrade = new int;
//	*pGrade = *(source.pGrade);
//}

Student::~Student()
{
//	if (pGrade)
		delete pGrade;
	pGrade = nullptr;

}

void Student::stam1(Student x)
{
	id++;
	(*pGrade)--;
}