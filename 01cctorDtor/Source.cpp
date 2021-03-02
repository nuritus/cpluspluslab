#include "point.h"
#include <iostream>
using namespace std;

void func(point ptmp);
int main()
{
   int a[10];
   point p1,p2(2,8),p3(p2), p4 = p1;
   p1 = p2;
   a[9] = 67;
   cout<<"p1: ";	p1.print();
   cout<<"p2: ";	p2.print();
   cout<<"p3: ";    p3.print();
}
