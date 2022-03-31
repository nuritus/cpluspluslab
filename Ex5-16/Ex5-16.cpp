//שיעור 5  דוגמא 15
//חריגות של STL 
//ההבדל בין המתודות לפי exception safety

#include <iostream>
using namespace std;

int main()
{
	try {
		string mystr("hello");
		//cout << mystr[10];
		cout << mystr.at(10);
	}
	catch (...)
	{
		cout << "abort not called";
	}
}