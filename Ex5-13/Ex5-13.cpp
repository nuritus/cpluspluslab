//שיעור 5  דוגמא 13
//שימוש במנגנון החריגות 
//זריקת מחרוזת כחריגה

#include <iostream>
using namespace std;

void func(int x, int* ptr)
{
	if (ptr == nullptr)
	{
		char a[4] = { 'e','r', 'r','\0'};
		throw a;
	}
	if (x == 0)
		throw "Exception from fun() because x.";
}

int main()
{
	try
	{
		try
		{
			//func(0, new int());
			func(1, nullptr);

		}
		catch (char* msg)
		{
			cout << "Try / catch number 1." << endl;
			cout << msg << endl;
			//throw "Throw again an exception.";
		}
	}
	catch (const char* msg) {
		cout << "Try / catch number 2." << endl;
		cout << msg << endl;
	}
	return 0;
}
