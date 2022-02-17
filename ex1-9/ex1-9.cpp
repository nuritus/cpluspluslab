// ����� 1 - ����� 9
// ����� �����
// ����� ����� ������
//Lesson 1 - Example 9
//Class - Point
//Initializing an attribute

#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;

public:
	Point() :x(0)
	{
		y = 0;
		cout << " in empty ctor\n";
	}
	Point(int _x, int _y) :x(_x), y(_y)
	{
		cout << " in parms ctor\n";
	}

	void print() {
		cout << " ( " << x << "," << y << " ) " << endl;
	}
};

int main()
{

	Point p1;
	Point p2(4, 5);
	p1.print();
	p2.print();
}