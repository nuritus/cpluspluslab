#include "Vector.h"
#include <iostream>
using namespace std;


Vector::Vector(int myCapacity) // implement ctor
{
    if (myCapacity > 0)
        capacity = pow(2, ceil(log(myCapacity) / log(2)));
    else
        capacity = 2;
    data = new int[capacity];
    for (int i = 0; i < capacity; i++)
        data[i] = 0;
    size = 0;
}


Vector::Vector(const Vector& v) {
    capacity = v.capacity;
    size = v.size;
    data = new int[capacity];
    for (int i = 0; i < size; i++)
        data[i] = v.data[i];
}

Vector::Vector(Vector&& v)
{
    data = v.data;
    capacity = v.capacity;
    size = v.size;
    v.data = nullptr;
}


Vector::~Vector() {
    if (data)
        delete[] data;
    data = nullptr;
}


Vector& Vector::operator=(Vector&& v)
{
    if (data)
        delete[] data;
    data = v.data;
    capacity = v.capacity;
    size = v.size;
    v.data = nullptr;
    return *this;
}

Vector& Vector::operator[](int index)
{
    if (index < size)
        return vec[index];
    return vec[0];
};
