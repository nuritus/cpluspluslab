#include "Vector.h"
#include <iostream>
using namespace std;

void main()
{
   int nums[10];
   for (int i=0;i<10;i++)
      nums[i]=i;
   Vector vec1,  vec2(4,8), vec3(nums);
   cout<<"vec1: ";
   vec1.print();
   cout<<"\nvec2: ";
   vec2.print();
   cout<<"\nvec3: ";
   vec3.print();
}

