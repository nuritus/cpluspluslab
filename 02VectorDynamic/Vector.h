#pragma once
//Example Channi Nadler
using namespace std;
class Vector
{
private:
   int *numbers;
   int size;
public:
   Vector(int Size = 10);
   Vector(int val, int Size=10);
   Vector( int* vec,int Size=10);
   void print();
};