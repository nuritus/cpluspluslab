//שיעור 7  דוגמא 11
//פונקציה וירטואלית
//אי/כתיבת וירטואל ביורש

#include <iostream>
using namespace std;

class A
{
public:
	virtual void print1() { cout << "A–print1"; }
	virtual void print2() { cout << "A–print2"; }
};

class B : public A
{
public:
	void print1() { cout << "B–print1"; }
	virtual void print2() { cout << "B–print2"; }
};

class C : public B
{
public:
	void print1() { cout << "C–print1"; }
	void print2() { cout << "C–print2"; }
};

int main()
{
	A* pA = new B;
	pA->print1();   // B-print1
	pA->print2();   // B-print2

	A* pAA = new C;
	pAA->print1();   // C-print1
	pAA->print2();   // C-print2

	B* pB = new C;
	pB->print1();   // C-print1
	pB->print2();   // C-print2
}