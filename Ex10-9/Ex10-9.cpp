//שיעור 11  דוגמא 9
// שימוש במיון מהיר
//אלגוריתם גנרי שקיים בSTD

#define EX 

#ifdef EX


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

#else

#include <iostream>
using namespace std;
bool isBigger(int i, int j) { return i > j; }
void bubbleSort(int* vec, int size, bool(*cmp)(int, int))
{
    for (int last = size - 1; last > 0; last--)
        for (int i = 0; i < last; i++)
            if (cmp(vec[i], vec[i + 1])) {
                int temp = vec[i];
                vec[i] = vec[i + 1];
                vec[i + 1] = temp;
            }
}
int main() {
    int vec[10];
    for (int i = 0; i < 10; i++) {
        vec[i] = rand() % 100;
        cout << vec[i] << ' ';
    }
    cout << endl;
    bubbleSort(vec, 10, isBigger);
    for (int i = 0; i < 10; i++)
        cout << vec[i] << ' ';
    cout << endl;
    bubbleSort(vec, 10, [](int x, int y) {return x < y; });
    for (int i = 0; i < 10; i++)
        cout << vec[i] << ' ';
    cout << endl;
    return 0;
}

#endif // EX
