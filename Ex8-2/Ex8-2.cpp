//שיעור 8  דוגמא 2
//חידוד ירושה וירטואלית
//עם/בלי וירטואל, הפונקציות עם חתימה זהה, חובת המרה

#include <iostream>
using namespace std;

class A
{
public:   void print()  //הבדל בהדפסה עם virtual
{
	cout << "A ";
}
};
class B : public A
{
public:  void print()
{
	cout << "B ";
}
};
class C : public B
{
public:   void print(string str)//עם ובלי פרמטר בסוגריים
{
	cout << "C ";
}
};

int main()
{
	A** p = new A * [3];        p[0] = new A;	        p[1] = new B;	        p[2] = new C;
	for (int i = 1; i < 3; i++)
		p[i]->print();
	B* pb;
	pb = p[2]; //חובת המרה (*C)
	pb->print();
	p[0]->print();
}