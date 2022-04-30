//שיעור 8  דוגמא 5
//הפקודה nullptr

#include <iostream>
using namespace std;

int main()
{
	int* p = nullptr;
	p = 0;
	//int x = nullptr; //compilation error
	int x = NULL;

	cout << p << endl;
	cout << x << endl;

	cout << typeid(NULL).name() << endl;
	cout << typeid(nullptr).name() << endl;
}

