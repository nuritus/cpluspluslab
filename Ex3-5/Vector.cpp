#include "Vector.h"
#include <iostream>
using namespace std;

Vector::Vector(int sizeVec = 0) {
    size = sizeVec; 
    if (size < 0) size = 0;
    float help = sqrt(size);
          
    capacity = pow(2, ceil(log(size) / log(2)));//יש לוודא שהגודל בפועל הוא חזקה של 2 וגדול או שווה לתכולה
        
    data = new int[capacity];
    srand((unsigned)time(NULL));
    for (int i = 0; i < size; i++)
        data[i] = rand() % 100;
}


Vector::Vector(const Vector& v) {
    capacity = v.capacity;
    size = v.size;
    data = new int[capacity];
    for (int i = 0; i < size; i++)
        data[i] = v.data[i];
}

Vector::~Vector() {
    if (size)
        delete[] data;
    data = nullptr;
}

