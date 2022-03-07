//שיעור 4  דוגמא 5
//אופטור מיקום


#include <iostream>
using namespace std;

class Rect
{
	int length, width;
public:

	int& operator [](int index) //חייב להיות lvalue לצורך הצבה
	{
		if (index == 0)
			return length;
		return width;
	}
};

int main()
{
	Rect r;
	r[0] = 1; //חובה שיהיה משתנה הפניה
	r[1] = 2;
	cout << r[0] << r[3]; //זה עובד כמובן גם בתור rvalue
	return 0;
}
