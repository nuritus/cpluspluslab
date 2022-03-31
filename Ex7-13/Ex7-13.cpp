//שיעור 7  דוגמא 13
//ללא הורס וירטואלי
// שימוש במצביעים או הפניות

#include <iostream>
using namespace std;

class A
{
private:
	char* str1;
public:
	A(const char* str);
	~A();
};
A::A(const char* str)
{
	cout << "A constructor\n";
	str1 = new char[strlen(str) + 1];
	strcpy_s(str1, strlen(str) + 1, str);
}
A::~A()
{
	cout << "A destructor\n";
	if (str1)
		delete str1;;
}

class B :public A
{
private:
	char* str2;
public:
	B(const char* str);
	~B();
};
B::B(const char* str) : A(str)
{
	cout << "B constructor\n";
	str2 = new char[strlen(str) + 1];
	strcpy_s(str2, strlen(str) + 1, str);
}
B::~B()
{
	cout << "B destructor\n";

	if (str2)
		delete str2;
}

int main()
{
	A* ab = new B("test ab");
	delete ab;
	return 0;
}

/*output:
A constructor
B constructor
A destructor
*/


