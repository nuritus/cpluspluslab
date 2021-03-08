#include "Vector.h"
#include <iostream>
using namespace std;

Vector::Vector(int sizeVec) {
    size = sizeVec;
    numbers = new int[size];
    srand((unsigned)time(NULL));
    for (int i = 0; i < size; i++)
        numbers[i] = rand() % 100;
    cout << "ctor random" << endl;
}

Vector::Vector(int val, int sizeVec) {
    size = sizeVec;
    numbers = new int[size];
    for (int i = 0; i < size; i++)
        numbers[i] = val;
    cout << "ctor value" << endl;
}

Vector::Vector(int* vec, int sizeVec) {
    size = sizeVec;
    numbers = new int[size];
    for (int i = 0; i < size; i++)
        numbers[i] = vec[i];
    cout << "ctor array" << endl;
}

Vector::Vector(const Vector& V) {
    size = V.size;
    numbers = new int[size];
    for (int i = 0; i < size; i++)
        numbers[i] = V.numbers[i];
    cout << "copy ctor" << endl;
}

Vector::~Vector() {
    if (size)  
        delete[] numbers; 
    numbers = nullptr;
    cout << "desctor" << endl;
}

