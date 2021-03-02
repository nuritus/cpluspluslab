#include <iostream>
#include "String.h"
using namespace std;

String f()
{
	String temp("good day");
	return temp;
}


int main()
{
	String s1 = "hello";
	int i;
	i = 10;
	const int a = 0;
	s1.print();
	String s2(s1);
	s2.print();
	String s3 = "how are you?";
	String s4 = s3;
	cout << s4.Find("are") <<  endl;
	String s5(f());
	s5 = s4;
	s5.print();
	system("pause");
	return 0;
}