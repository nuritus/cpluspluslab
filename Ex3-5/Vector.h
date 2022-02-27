#pragma once
class Vector
{
	int* data;
	int capacity;
	int size;
public:
	Vector(int myCapacity=2); // ctor 
	Vector(const Vector& v);//c-ctor
	Vector(Vector&& v);//m-cto
	~Vector();


	Vector& operator=(Vector&& v);//m-assignment

	Vector& operator[](int index);

};
