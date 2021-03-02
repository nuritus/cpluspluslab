#ifndef Rect_H
#define Rect_H
#include <iostream>

using namespace std;

class Rect
{
	int* width;
	int* height;
public:
	Rect();   //ctor1
	Rect(int a, int b);   //ctor2
	~Rect();   //dtor
	int area()
	{
		return ((*width) * (*height));
	}
};

#endif
