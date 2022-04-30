#include "Vector.h"

//=======class Vector implementation=====     
Vector::Vector(int Capacity)
{
	capacity = Capacity;
	size = 0;
	data = new int[capacity];
	if (data == NULL)
		throw "memory allocation problem";
}

Vector::Vector(const Vector& vec)
{
	capacity = vec.capacity;
	size = vec.size;
	data = new int[capacity];
	if (data == NULL)
		throw "memory allocation problem";
	for (int index = 0; index < size; index++)
		data[index] = vec.data[index];
}

Vector::~Vector()
{
	if (data != NULL) {
		delete[] data;
		data = NULL;
	}
}

void Vector::clear()
{
	size = 0;
}

//view function
int& Vector::operator [](int index)
{
	if (index < 0 || index >= size)
		throw "vector overflow";
	return data[index];
}

//modify function
const int& Vector::operator [](int index) const
{
	if (index < 0 || index >= size)
		throw "vector overflow";
	return data[index];
}

Vector& Vector::operator =(const Vector& vec)
{
	size = vec.size;
	capacity = vec.capacity;

	if (data)
		delete[] data;
	data = new int[capacity];
	if (data == NULL)
		throw "memory allocation problem";
	for (int index = 0; index < size; index++)
		data[index] = vec.data[index];
	return *this;
}

int Vector::getSize() const
{
	return size;
}

int Vector::getCapacity() const
{
	return capacity;
}

void Vector::insert(int value)
{
	if (size >= capacity)
		throw "the vector is full";
	data[size] = value;
	size++;
}

int Vector::delLast()
{
	if (size < 0)
		throw "the vector is empty";
	return data[--size];
}
