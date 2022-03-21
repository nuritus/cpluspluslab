//שיעור 5  דוגמא 10
//שימוש במנגנון החריגות 
//טיפוסי חריגות שונים, וכן תפסן ברירת מחדל
//מבנה נכון יותר - זריקה בפונקציה ותפיסה בתכנית הראשית

#include <iostream>
using namespace std;

void f()
{
	throw 23.0;
}
void main() {
	try 
	{
		f(); 
	}

	catch (string s)
	{
		cout << "string!" << endl;
	}
	catch (...)
	{
		cout << "An exception!" << endl;
	}
	catch (double d) //שגיאת קומפילציה. אבל גם אם היה אפשרי כבר היה נתפס ולא מגיע לבלוק זה
	{
		cout << "double!" << endl;
	}
	cout << "End of program" << endl;
}
