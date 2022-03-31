//שיעור 7  דוגמא 10
//פונקציה וירטואלית

#include <iostream>
using namespace std;

class A
{
public:
	virtual void print() { cout << "A–print"; }
	virtual void message() { cout << "A–message"; }
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
	A* pA = &a;
	pA->print();   // A-print

	B* pB = new B;
	pB->print();   // B-print
	pB->message(); // A-message
	pB->A::print(); // A-print

	B b;
	pA = &b;
	pA->print();   // B-print
	pA->bFunction(); //comp error!!
}