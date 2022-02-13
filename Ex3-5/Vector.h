#pragma once
class Vector
{
	int* data;
	int capacity;
	int size;
public:
	Vector(int myCapacity); // ctor 
	Vector(const Vector& v);//c-ctor
	~Vector();
};
