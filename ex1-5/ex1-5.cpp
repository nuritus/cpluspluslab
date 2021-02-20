// שיעור 1 - דוגמא 5
// מחלקה להגדרת מלבן
// הפשטת בקרה - חלוקה לקבצים
//Lesson 1 - Example 5
//Class - Rectangle
//control abstraction
//Dividing the code into separate files

#include "Rect.h" //חובה על מנת שיכיר את ההגדרות
using namespace std; //על מנת להשתמש בcout

int main() {
    Rect r;
   
    r.setLength(4);
    cout << r.getLength();

    return 0;
}

