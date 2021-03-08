#include "point.h"
#include <iostream>
using namespace std;

point::point(int X, int Y) :x(X), y(Y)
{
	x = 3;
}

void point::print()
{
	cout << '(' << x << ',' << y << ")\n";
}