//שיעור 6  דוגמא 2
//מימוש רשימה משורשרת
//כולל מחלקה פנימית של חוליה

#include <iostream>
#include "List.h"
using namespace std;
int main() {
    int element;
    List ls1, ls2;
    try
    {
        for (int i = 0; i < 5; i++)
        {
            ls1.add(i);
            cout << i << " ";
        }
        ls1.removeFirst();
        for (int i = 0; i < 4; i++) {
            element = ls1.firstElement();
            cout << element << " ";
            ls2.add(element);
        }
        cout << endl;
        cout << ((ls2.search(4)) ? "ls2 includes 4" :
            "ls2 doesn't include 4") << endl;
        cout << ((ls2.search(3)) ? "ls2 includes 3" :
            "ls2 doesn't include 3") << endl;
        ls2.removeFirst();
        cout << ((ls2.search(3)) ? "ls2 includes 3" : "ls2 doesn't include 3") << endl;
    }
    catch (char* problem)
    {
        cout << problem;
    }
    return 0;
}







