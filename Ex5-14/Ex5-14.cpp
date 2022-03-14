//שיעור 5  דוגמא 14
//שימוש במנגנון החריגות 
//זריקת מחלקה כחריגה

#include <iostream>
using namespace std;

#define B 

#ifdef A
// A

class DateError
{
public:
	int d;
	string derr;
	DateError(int dd) : d(dd) { derr = "Not valid day\n"; };
};

class Date
{
private:
	int day, month, year;
public:
	Date(int x, int y, int z) : month(y), year(z) { setDay(x); }
	void setDay(int _day)
	{
		if (_day > 31 || _day < 1)
		{
			DateError de1(_day);
			throw de1;
			//throw DateError(_day);
		}
		day = _day;
	}
};

void main()
{
	try
	{
		Date mydate(40, 5, 2004);
	}
	catch (DateError de)
	{
		cout << de.derr << " " << de.d << endl;
	}
}

#endif //A
#ifdef B

class Date
{
public:   class DateError {};
private:  int day, month, year;
public:  Date(int x, int y, int z) :month(y), year(z) { setDay(x); }
	  void setDay(int day)
	  {
		  if (day > 31 || day < 1)	throw DateError();
		  day = day;
	  }
};

void main()
{
	try
	{
		Date d(40, 5, 2004);
	}
	catch (Date::DateError d)
	{
		cout << "Not valid day" << endl;
	}

}
#endif // B