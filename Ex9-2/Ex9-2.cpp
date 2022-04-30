//שיעור 9  דוגמא 2
//פונקציה גנרית

#include <iostream>
using namespace std;


template <class T>
T mult(T x, T y)
{
	return x * y;
}

template <class T>
void fun()
{
    T a;
    cin >> a;
    cout << a;
}

void main()
{
    cout << mult(4, 7);//print 28
    cout << mult(2.5,3); //comp error
    cout << mult<int>(2.5, 3);//print 6
    cout << mult((float)2.5, (float)3);//print 7.5      

   fun<float>(); //חובה לכתוב מה הטיפוס, כי הקומפיילר לא יכול לזהות
 
}
