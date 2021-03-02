#include "point.h"
#include <iostream>
using namespace std;

point::point(int X, int Y) :x(X), y(Y)
{ }

void point::print()
{
	cout << '(' << x << ',' << y << ")\n";
}