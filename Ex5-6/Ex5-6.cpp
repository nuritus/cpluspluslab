//����� 5  ����� 6
//������� �����
//�� ����� ���� �����


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
