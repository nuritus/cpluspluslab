// שיעור 2 - דוגמא 11
// שימוש במצביע this במחלקה



#pragma once
#include <iostream> 
using namespace std;

class Student
{
public:
	bool isItMe(const Student& param);
};

bool Student::isItMe(const Student& param)
{
	if (&param == this)
		return true;
	else
		return false;
}

int main()
{
	Student a;
	Student* b = &a;
	Student c;

	if (b->isItMe(a))
		cout << "yes, &a is b";

	if (b->isItMe(c))
		cout << "yes, &a is b";
	return 0;
}
//output: yes, &a is b

