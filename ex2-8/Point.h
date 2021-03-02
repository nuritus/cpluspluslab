#pragma once
#include <iostream>
using namespace std;

class point
{
private:
    int x = 0;
    int y;
public:
    point() { y = 0; } //empty ctor
    point(int X, int Y) : x(X), y(Y) { } //ctor 2
    point(const point& p) //copy ctor
    {
        x = p.getX();  //p.x will be compilation error
        y = p.getY();
    }
    int getX() const { return x; }
    int getY() const { return y; }
    void print() { cout << '(' << x << ',' << y << ")\n"; }
};
