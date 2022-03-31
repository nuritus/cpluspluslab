//שיעור 7  דוגמא 9
//ירושה מרובה
//כמה מחלקות בסיס
//זהירות מירושה פרטית

#include <iostream>
using namespace std;

class  Father
{
private:
	int x;
public:
	Father(int var1) { x = var1; }
	int getX() { return x; }
};

class  Mother {
private:
	int y;
public:
	Mother(int  var2) { y = var2; }
	int getY() { return y; }
};

class Child : public Father, Mother
{
private:
	int z;
public:
	Child(int a, int b, int c) :Mother(b), Father(a) { z = c; }
	void printAll() { cout << getX() << "\t" << getY() << "\t" << z; }
};

int  main() {
	Child zuzik(17, 28, 36);
	zuzik.printAll();
	cout << zuzik.getX() << "\t" << zuzik.getY() << endl;
	return 0;
}
