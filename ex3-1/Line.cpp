#include "Line.h"
#include <iostream>

Line::Line(char myColor, int myX1, int myY1, int myX2, int myY2) :
	rightEdge(myX1, myY1), leftEdge(myX2, myY2) //�� ��� ���� ��� - ���� ���� ���� ����� ������ ����� ������
{
	color = myColor;
	std::cout << "line ctor\n";
}

Line::~Line(){ std::cout << "line dest\n"; }