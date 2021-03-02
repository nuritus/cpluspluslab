#include <iostream>
#include "Vector.h"
#include <ctime>
using namespace std;




Vector::Vector(int _size)
{
    size = _size;
    numbers = new int[size];
    srand((unsigned)time(NULL));
    for (int i = 0; i < size; i++)
        numbers[i] = rand() % 100;
}
Vector::Vector(int val, int _size)
{
    size = _size;
    numbers = new int[size];
    for (int i = 0; i < size; i++)
        numbers[i] = val;
}
Vector::Vector(int* vec, int _size)
{
    size = _size;
    numbers = new int[size];
    for (int i = 0; i < size; i++)
        numbers[i] = vec[i];
}

Vector::~Vector()
{
    cout << " dtor" << endl;
    if (size)  delete[] numbers;
}
Vector::Vector(const Vector& vec)
{
    size = vec.size;
    numbers = new int[size];
    for (int i = 0; i < size; i++)
        numbers[i] = vec.numbers[i];
}

void Vector::print() const
{
    for (int i = 0; i < size; i++)
        cout << numbers[i] << ' ';
    cout << endl;
}

void Vector::changeValues(int val){
    for (int i = 0; i < size; i++)
        numbers[i] = val;
}