//#pragma once

class Point {
	int x;
	int y;
public:
	Point(int myX, int myY);
	~Point(); //לא הכרחי - כי המחלקה לא דינמית
	void setX(int myX);
	void setY(int myY);
};

