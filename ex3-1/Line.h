//#pragma once

#include "Point.h"

class Line {
	
	Point leftEdge;
	Point rightEdge;//����� ��� ��� �����, �� ��� ������� ����� ����� ������
	char color;
public:
	Line(char myColor, int myX1, int myY1, int myX2, int myY2);
	~Line();
};