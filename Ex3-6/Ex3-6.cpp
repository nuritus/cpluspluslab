//שיעור 3 - דוגמא 6
//הפונקציה move קיימת למבני נתונים מוגדרים בשפה

#include <map>//מבנה נתונים כלשהו - לא למדנו עדיין...
using namespace std;

void swap(map<int, char>& a, map<int, char>& b)
{
	map<int, char> t = move(a);  // lvalue הפונקציה תחזיר
	a = move(b);
	b = move(t);
}


