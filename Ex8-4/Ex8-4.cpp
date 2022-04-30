//שיעור 8  דוגמא 4
//הפקודה final
//עבור מתודה ועבור מחלקה


#include <iostream>
using namespace std;

class A
{
public:
	virtual void print() { cout << "A-print"; }
};

class B : public A
{
public:
	void print() final { cout << "B-print"; }
};

class C : public B
{
public:
	void print() { cout << "B-print"; } //comp error!!!!!
	void print(int x) { cout << "B-print"; } //ok!!!!!
};

struct Parent final
{
	void f() {};
};

struct Son : public Parent
{
	void f() {};
}