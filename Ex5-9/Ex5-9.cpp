//שיעור 5  דוגמא 9
//שימוש במנגנון החריגות 
//זריקת חריגות מאותו טיפוס. התפיסה בתוך הפונקציה
//מודפסת הודעת שגיאה וניתנים ערכי ברירת מחדל

#include <iostream>
using namespace std;

int arithmetic(int x, int y, char op)
{
	int temp;
	try
	{
		if (op == '+')
		{
			temp = x + y;
			if (((x > 0) && (y > 0) && (temp < 0)) || ((x < 0) && (y < 0) && (temp > 0)))
				/* overflow */ throw 1;
			return temp;
		} // if 
		else
			if (op == '-')
			{
				temp = x - y;
				if (((x < 0) && (y > 0) && (temp > 0)) || ((x > 0) && (y < 0) && (temp < 0)))
					/* overflow */ throw 2;
				return temp;
			} // if
			else
				if (op == '*')
				{
					temp = x * y;
					if (((x > 0) && (y > 0) && (temp < 0)) || ((x < 0) && (y < 0) && (temp < 0)) ||
						((x > 0) && (y < 0) && (temp > 0)) || ((x > 0) && (y < 0) && (temp > 0)))
						/* overflow */  throw 3;
					return temp;
				} // if   
		if (op == '/')
		{
			if (y == 0)
				throw 4;
			return x / y;
		} // if
		else
			throw 5;
	} // try

	catch (int a)
	{
		switch (a)
		{
		case 1:
			cout << "Summation overflow" << endl;
			break;
		case 2:
			cout << "Subtraction overflow" << endl;
			break;
		case 3:
			cout << "Multiplication overflow" << endl;
			break;
		case 4:
			clog << "Divide by zero" << endl;
			break;
		case 5:
			cout << "Invalid operator character" << endl;
			break;
		} // switch
		return 0;

	} // catch
}// arithmetic

int main()
{
	int x, y, z;

	x = 8;
	y = 0;
	z = arithmetic(x, y, '/');
	cout << x << "/" << y << " = " << z << endl;;

	x = 8;
	y = 3;
	z = arithmetic(x, y, '*');
	cout << x << "*" << y << " = " << z << endl;;

	x = 8000000;
	y = 3000000;
	z = arithmetic(x, y, '*');
	cout << x << "*" << y << " = " << z << endl;;
} // main
