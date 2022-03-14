//שיעור 5  דוגמא 12
//שימוש במנגנון החריגות 
//חריגה שנתפסת לאחר כמה רמות - מי מתבצע?

#include <iostream>
using namespace std;

int level3()
{
	cout << "Level 3 beginning." << endl;
	int num1, num2;
	cout << "enter 2 numbers\n";
	cin >> num1 >> num2;
	if (!num2)
		throw "dividing by zero ";
	int result = num1 / num2;
	cout << "Level 3 ending." << endl;
	return result;
}

void level2()
{
	try
	{
		cout << "Level 2 beginning." << endl;
		cout << "The result is: " << level3() << endl;
		cout << "Level 2 ending." << endl;
	}
	catch (int e)
	{
		cout << "error: " << e << endl;
	}
}
void level1()
{
	cout << "Level 1 beginning." << endl;
	try
	{
		level2();
	}
	catch (const char* problem)
	{
		cout << "\nException : " << problem;
	}
	cout << "\nLevel 1 ending." << endl;
}

int main()
{
	cout << "Program beginning." << endl;
	level1();
	cout << "Program ending." << endl;
}

