//שיעור 9  דוגמא 2
//שימוש בפונקציה גנרית
//כל הפעולות בפונקציה צריכות להיות מוגדרות עבור הטיפוס

#include <iostream>
using namespace std;

template <class T>
void Print(T val)
{
	cout << "Value is " << val << endl;
	T i;
	i = val;
	i = i + val;
}

template <class T>
T mymax(T x, T y)  //return type T
{
	if (x > y)
		return x;
	return y;
}

class MyClass
{
	//...
	//operator >
	MyClass operator-(const MyClass& num) const;
	friend ostream& operator<<(ostream& os, MyClass num);

};

void main()
{
	int sum = 7;
	char initial = 'A';
	Print(sum);
	Print<char>(initial);
	Print<float>(8);
	Print<MyClass>(mc);	//operator << , + must be defined in MyClass

	cout << mymax<int>(3, 4) << endl;
	float a = 5.25, b = 3.5;
	cout << mymax<float>(a, b) << endl;
	cout << mymax<char>('a', 'z') << endl;
	MyClass mc1, mc2;
	cout << mymax<MyClass>(mc1, mc2) << endl; //compilation error: 
			//operator > and << must be defined for MyClass

}


	

