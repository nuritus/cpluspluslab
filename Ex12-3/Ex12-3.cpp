#include <iostream>
using namespace std;

int main()
{

	cout << sizeof(int) << endl;//4
	cout << sizeof(float) << endl; //4
	cout << sizeof(bool) << endl; //1

	struct example
	{
		int  x;
		float y;
		bool  z;
	};
	cout << sizeof(example) << endl;
	//12 and not 9

	struct A
	{
		char c;
		char d;
		int i;
	};
	cout << sizeof(A) << endl;
	//8 and not 6

	struct B
	{
		char c;
		int i;
		char d;
	};
	cout << sizeof(B) << endl;
	//12 and not 6

	class st1
	{
		char x;
		double y;
		int g;
		int s;
		int f;

	};
	cout << sizeof(st1) << endl;
	//32 and not 21

	class st2
	{
		int x;
		double y;
		int g;
		int s;
		int f;

	};
	cout << sizeof(st2) << endl;
	//32 and not 24

	class st3
	{
		int x;
		int d;
		double y;
	};
	cout << sizeof(st3) << endl;
	//16 and not 16

	class st4
	{
		int x;
		double y;
		int d;
	};
	cout << sizeof(st4) << endl; //24 and not 16

	struct st5
	{
		char c; // 1 byte
		int i;  // 4 bytes
	};
	cout << sizeof(st5) << endl; //8 and not 5

}