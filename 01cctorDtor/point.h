#pragma once
//Example Channi Nadler
#include <iostream>
using namespace std;
class point
{
private:
   int x = 0;
   int y;
public:
   //default constructor
   point() {y=0;}
   point(int X, int Y);
   //copy constructor
   point(const point& p);
   int getX() const{return x;}
   int getY() const{return y;}
   void print() const;
};