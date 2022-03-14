//שיעור 5  דוגמא 2
//אופרטור [] כlvalue

#include <iostream>
using namespace std;

class Rect
{
	int length, width;
public:

	int& operator [](int index)
	{
		if (index == 0)
			return length;
		return width; //index==1
	}
};

int main()
{
	Rect r;
	r[0] = 1;
	r[1] = 2;
	cout << r[0] <<"X"<< r[3];

	r.operator[](0) = 5;
}
