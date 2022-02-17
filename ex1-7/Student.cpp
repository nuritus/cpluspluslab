#include <iostream>
#include "Student.h"
using namespace std;

#define NUM 10 //הוראה לקדם-מעבד

const const int YEAR = 12; //מה ההבדל בין שתי השורות הללו?

void Student::setGrade()
{
	int year;
	do {
		cout << "enter your grade ";
		cin >> year;
	} while (year < 1 || year>YEAR);
	grade = year;
}

int Student::getGrade()
{
	return grade;
}

void Student::setMarks()
{
	cout << "enter 10 mark ";
	for (int i = 0; i < 10; i++) {
		cin >> marks[i];
		if (marks[i] < 0 || marks[i]>100) {
			cout << "ERROR\n";
			i--;
		}
	}
}


int Student::sum()
{
	int s = 0;
	for (int i = 0; i < NUM; i++)
		s += marks[i];
	return s;
}

float Student::getAverage() {
	return (sum() / NUM);
}

