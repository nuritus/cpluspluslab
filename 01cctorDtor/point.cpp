#include "point.h"
#include <iostream>
using namespace std;

point::point(int X, int Y)//:x(X), y(Y)
{
   x = X;
   y = Y;
}
point::point(const point& p)
{
   x=p.getX();
   y=p.getY();
}
void point::print() const
{
   cout<<'('<<x<<','<<y<<")\n";
}