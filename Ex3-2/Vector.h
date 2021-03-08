#pragma once
class Vector {
public:
	int* numbers;
	int size;
	Vector(int sizeVec = 10);
	Vector(int val, int sizeVec);
	Vector(int* vec, int sizeVec = 10);
	Vector(const Vector&);
	~Vector();
};
