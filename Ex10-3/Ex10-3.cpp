//שיעור 11  דוגמא 3
// void pointer
//הצבה לעומת ביצוע פעולות (צריך המרה)

#include <iostream>
using namespace std;
void main()
{
	int a = 10000;
	float b = 10.10;
	double c = 1.12345;
	char d = 'a';
	void* p;
	p = &a;
	p = &b;
	p = &c;
	p = &d;

	p = &a;
	cout << *(int*)p << endl;
	p = &b;
	cout << *(float*)p << endl;
	p = &c;
	cout << *(double*)p << endl;
	p = &d;
	cout << *(char*)p << endl;


	int int_arr[] = { 1,2,3,4,5,6 };
	void* p;
	p = int_arr;
	cout << *((int*)(p)+4) << endl;
	p = (char*)(p)+1 * 4;
	cout << *(int*)(p);

}
