//שיעור 5  דוגמא 5
// משתנה סטטי של מחלקה
//ספירת עצמים מסוג מחלקה


#include <iostream>
using namespace std;

class student
{
private:
	char name[20];
	int grade;
public:
	student(char* n);
	void setGrade(int g);
	void percentageOfFailers();

	static int numOfStudents; //כדי שתהיה גישה מחוץ למחלקה - יש להגדיר את השדות ציבוריים
	static int numOfFails;
};

int student::numOfStudents = 0;
int student::numOfFails = 0;

student::student(char* n)
{
	strcpy_s(name, n);
	numOfStudents++;
}
void student::setGrade(int g)
{
	grade = g;
	cout << grade << endl;
	if (grade < 55)
		numOfFails++;
}
void student::percentageOfFailers()
{
	cout << (float)numOfFails / numOfStudents * 100;
	cout << "% of the students failed\n";
}
int main()
{
	char name[15];
	int mark;
	for (int i = 0; i < 10; i++)
	{
		cout << "enter students name and grade\n";
		cin >> name >> mark;
		student s(name);
		s.setGrade(mark);
		s.percentageOfFailers();
		
	}

	cout << student::numOfStudents;
	cout << student::numOfFails;
	return 0;
}


//
//class CDummy  {
// public:
//	 static int n;
//	 CDummy() { n++; };
//	 ~CDummy() { n--; };
// };
//
// int CDummy::n = 0;
//
//#include <iostream>
//
// int main()
// {
//	 CDummy a;
//	 CDummy b[5];
//	 CDummy* c = new CDummy;
//	 std::cout << a.n << std::endl;
//	 delete c;
//	 std::cout << CDummy::n << std::endl;
//	 return 0;
// }
