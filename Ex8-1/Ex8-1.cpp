//שיעור 8  דוגמא 1
//מספר תרגילים מורכבים על מחלקות
//לא חובה. נכתבו ע"י מאיר קומר

#define EX 1 //ניתן לשנות כאן את הערך על מנת לראות את שאר הדוגמאות

#include <iostream>
using namespace std;

#if EX==1

class C;//למה זה נחוץ?

class A {
public:	A() {};
	  ~A() {};
	  C func();//אי אפשר לממש בתוך המחלקה ממש
};
class C :public A {
public:	int first;
	  C() {};
	  ~C() {};
	  C getx() { return *this; }
};
C A::func() { C temp;  temp.first = 0;  return temp.getx(); }

int main()
{
}


#elif A==2

class A {
public:   A(int n = 0) : var1(n)
{
	cout << var1 << '\t';  ++var1;
}
protected:    int var1;
}; // end of class A 
class B : public A {
public: B(int n = 5) : var3(new A[2]), var2(++var1)
{
	cout << var1 << '\t';
}
	  ~B() { delete[] var3; }
private:    A var2;    A* var3;
}; // end of class B


int main()
{
	B b;
	cout << endl;
	return 0;
}

#elif EX==3

class A
{
public:  A(int n = 2) : var1(n) { }
	  ~A() { cout << var1 << '\t'; }
protected:   int var1;
};
class B : public A
{
public: B(int n) : var2(var1 + 1), var3(n) { }
	  ~B() { cout << var1 << '\t';  --var1; }
private:   A var2;
	   A var3;
};

int main()
{
	{ B b(5); }
	cout << endl;
	return 0;
}

#elif EX==4

class A {
public:	void func() { internal_func(); }
	  virtual void internal_func() {
		  cout << "internal of A" << endl;
	  }
};
class B : public A {
public:	void internal_func() {
	func();
	cout << "internal of B" << endl;
}
};
int main() {
	B instance;
	instance.internal_func();
}




#endif