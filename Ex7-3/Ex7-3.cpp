//שיעור 7  דוגמא 3
//סדר האתחול וההריסה בירושה 


#include <iostream>
using namespace std;

class C
{
public:
	C() { cout << "C constractor\n"; }
	~C() { cout << "C destractor\n"; }
};

class B
{
public:
	B() { cout << "B constractor\n"; }
	~B() { cout << "B destractor\n"; }
};

class A: public C
{
	B b;
public:
	A() { cout << "A constractor\n"; }
	~A() { cout << "A destractor\n"; }
};

int main()
{
	cout << "\n***************  construct A  ******************\n\n";
	A* a = new A();

	cout << "\n***************  construct A  ******************\n\n";
	if (a)
		delete a;
}