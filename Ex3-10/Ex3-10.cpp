//שיעור 3  דוגמא 10
//מחלקה עם שטחים דינמיים לטיפול במחרוזות
//אופרטורים והזזות

#include "Mystring.h"

int main()
{
    MyString s1("hello"); //ctor of s1

    MyString s2(s1); //copy ctor of st

    MyString s3("how are you?"); //ctor of s3

    cout << "----1----" << endl;

    MyString s4 = s3; //copy ctor from s3 to s4

    cout << "----2----" << endl;

    MyString s5 = f(); //move constructor

    cout << "----3----" << endl;

    MyString s6("hi");

    s6 = s3; //assignment operator from s3 to s6

    cout << "----4----" << endl;

    MyString s7("bye");

    s7 = f(); //move ctor and then move assignment operator

    cout << "----5----" << endl;

    s2 = s2 + s4; //operator+ and then move ctor and then move assignment operator

    cout << "----6----" << endl;

    s1 = s1 * 4; //operator* and then move ctor and then move assignment operator

    cout << "----7----" << endl;

    cout << s1;

    cout << "----8----" << endl;

    MyString s8;

    cin >> s8 >> s3;

    cout << "----9----" << endl;

}
//דוגמת הרצה עם הדפסות מפונקציות
//ctor: hello
//copy ctor : hello
//ctor : how are you ?
//--------
//copy ctor : how are you ?
//--------
//ctor : good day
//move ctor
//dtor
//--------
//ctor : hi
//operator= : how are you ?
//--------
//ctor : bye
//ctor : good day
//move ctor
//dtor
//move operator=
//dtor
//--------
//ctor : hellohow are you ?
//operator+ : hello
//move ctor
//dtor
//move operator=
//dtor
//--------
//ctor : hellohellohellohello
//operator* : hello
//move ctor
//dtor
//move operator=
//dtor
//--------
//hellohellohellohello
//operator<< : hellohellohellohello
//
//--------
//5
//efrat
//dtor
//dtor
//dtor
//dtor
//dtor
//dtor
//dtor
//dtor
