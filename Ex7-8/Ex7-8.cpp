//שיעור 7  דוגמא 8
//ירושה מרובה
//שרשרת הורשה

#include <iostream>
using namespace std;

class  Father
{
protected:
	int x;
public:
	Father(int var) { x = var; }
	int getX() { return x; }
};

class Child : public Father
{
protected:
	int y;
public:
	Child(int  var1, int var2) : Father(var2) { y = var1; }
	int getY() { return y; }
};

class Grandson : public Child
{
protected:
	int z;
public:
	Grandson(int v1, int v2, int v3) : Child(v1, v2) { z = v3; }
	void printAll()
	{
		cout << x << "\t" << y << "\t" << z;
	}
};
int  main()
{
	Grandson zuzik(17, 28, 36);
	zuzik.printAll();
}
