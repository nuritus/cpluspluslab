#include "Point.h"
#include <iostream>

void Point::setX(int myX) { x = myX; }
void Point::setY(int myY) { y = myY; }
Point::Point(int myX, int myY) : x(myX), y(myY) { std::cout << "point ctor\n"; }
Point::~Point(){ std::cout << "point des\n"; }