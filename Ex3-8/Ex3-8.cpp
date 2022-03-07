//שיעור 3  דוגמא 8
//מחלקה עם שטחים דינמיים - מימוש אופרטור =

#include <cstring>

class Student
{
public:
	int id;
	char* name; //pointer! need dynamic allocation
	Student(const char* myName=nullptr, int myID=0); //ctor
	~Student();//dtor
	Student(const Student& stu); //copy ctor
	Student& operator=(const Student& stu); //assignment operator
};

Student::Student(const char* myName, int myID) : id(myID)//חובה שהמחרוזת תהיה קבועה, כדי שנוכל לשלוח ערך, ולא פרמטר
{
	if (myName)
	{
		int len = strlen(myName) + 1;
		name = new char[len];
		strcpy_s(name, len, myName);
	}
	else
		name = nullptr;
}
Student::~Student()
{
	if (name)
		delete[] name;

	name = nullptr;
}
Student::Student(const Student& stu) //copy ctor
{
	id = stu.id;
	if (stu.name)
	{
		int len = strlen(stu.name) + 1;
		name = new char[len];
		strcpy_s(name, len, stu.name);
	}
	else
		name = nullptr;
}

Student& Student::operator=(const Student& stu) {
	id = stu.id;
	if (name)
		delete[] name;
	if (stu.name) {
		int len = strlen(stu.name) + 1;
		name = new char[len];
		strcpy_s(name, len, stu.name);
	}
	else	name = nullptr;
	return *this;
}


int main()
{
	Student s1("efrat", 11); //ctor - שלחנו מחרוזת שהיא rvalue
	Student s2;
	s2 = s1; //operator =
}
