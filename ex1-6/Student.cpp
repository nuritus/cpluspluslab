#include <iostream>
#include "Student.h"
using namespace std;

void Student::setGrade()
{
	int year;
	do {
		cout << "enter your grade ";
		cin >> year;
	} while (year < 1 || year>12);
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

void Student::setAverage()
{
	average = sum() / 10.0;
}

int Student::sum()
{
	int s = 0;
	for (int i = 0; i < 10; i++)
		s += marks[i];
	return s;
}

float Student::getAverage() {
	return average;
}

