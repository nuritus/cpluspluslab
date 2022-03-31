//שיעור 7  דוגמא 4
//סדר האתחול וההריסה בירושה 
//שדה מסוג המחלקה המורישה

#include <iostream>
using namespace std;

class A
{
protected:
	int a;

public:
	A(int a0 = 0) : a(a0)
	{
		cout << "A ctor. a = " << a << endl;
	}

	~A()
	{
		cout << "A dtor. a = " << a << endl;
	}
};

class B : public A
{
	A aObj;

protected:
	int b;

public:
	B(int a0 = 0, int b0 = 0) : A(a0), aObj(), b(b0)
	{
		cout << "B ctor. a = " << a << " b = " << b << endl;
	}

	~B()
	{
		cout << "B dtor. a = " << a << " b = " << b << endl;
	}
};

int main()
{
	B mb(1, 2);
}