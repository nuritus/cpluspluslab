//#pragma once

#include "Point.h"

class Line {
	
	Point leftEdge;
	Point rightEdge;//אתחול לפי סדר השדות, לא לפי אופרטור אתחול בשורת ההצהרה
	char color;
public:
	Line(char myColor, int myX1, int myY1, int myX2, int myY2);
	~Line();
};