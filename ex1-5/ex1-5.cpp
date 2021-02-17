// שיעור 1 - דוגמא 5
// מחלקה להגדרת מלבן
// הפשטת בקרה - חלוקה לקבצים

#include "Rect.h" //חובה על מנת שיכיר את ההגדרות
using namespace std; //על מנת להשתמש בcout

int main() {
    Rect r;
   
    r.setLength(4);
    cout << r.getLength();

    return 0;
}

