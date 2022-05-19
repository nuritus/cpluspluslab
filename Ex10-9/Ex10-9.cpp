//שיעור 11  דוגמא 9
// שימוש במיון מהיר
//אלגוריתם גנרי שקיים בSTD

#include <iostream>
using namespace std;

int func(const void* a, const void* b)
{
    return (*(float*)b - *(float*)a);
    // הפונקציה מחזירה מספר חיובי כאשר הארגומנט השני גדול יותר
}

void main()
{
    float arr[] = { 2.3 , -3, 4.5, -10.6 };
    qsort(arr, 4, 4, func);
    for (int i = 0; i < 4; i++)
        cout << arr[i] << " ";
}
