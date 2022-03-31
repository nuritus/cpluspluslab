//שיעור 7  דוגמא 7
//דריסה והמרה בירושה
//עצם מסוג הבן הוא גם עצם מסוג האב, אך לא להיפך

#include <iostream>
using namespace std;


class A
{
public:
	void print() { cout << "A–print"; }
};

class B : public A
{
public:
	void print() { cout << "B–print"; }
	void bFunction() { cout << "B–func"; }

};

int main()
{
	A a;
	B b;
	a.print();   // A-print
	b.print();   // B-print

	a = b; //the A part of b is assigned
	a.print(); //A-print

	A * pA = &a;
	B* pB = &b;
	pA->print(); //A-print
	pB->print(); //B-print

	pA = &b; //same as before
	pA->print(); //A-print

	b = a; //error (A is not kind of B)
	pB = &a; //the same error

	pA = &b;
	pA->bFunction(); //comp error, A has no function named bFunction
	pA->print(); //A-print

	((B*)pA)->print(); //B-print
	((B*)pA)->bFunction(); //B-func

}