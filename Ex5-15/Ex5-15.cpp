//שיעור 5  דוגמא 14
//שימוש במנגנון החריגות 
//שימוש במחלקת חריגות של STL

#include <iostream>
#include <exception>
using namespace std;

class myexception : public exception
{
	virtual const char* what() const throw()
	{
		return "My exception happened";
	}
} myex;

int main()
{
	try
	{
		int y = 0;
		throw myex;
		int x = 4 / y;
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	return 0;
}
