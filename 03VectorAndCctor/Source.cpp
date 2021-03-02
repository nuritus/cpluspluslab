
#include "vector.h"
#include <iostream>
using namespace std;

Vector func(Vector vtmp){
   Vector vtmp2;
   return vtmp2;
}
void main()
{
   int nums[10];
   for (int i=0;i<10;i++)
      nums[i]=i;
    Vector vec1,  vec2(4,8), vec3(nums), vec4(vec2);
   vec1.at(5) = 8;
   vec1[5] = 8;
   cout<<nums[5];
   cout<<vec1.at(5);
   func(vec3);
   cout<<"vec1: ";
   vec1.print();
   cout<<"\nvec2: ";
   vec2.print();
   cout<<"\nvec3: ";
   vec3.print();
   cout << "\nvec4: ";
   vec4.print();
}
