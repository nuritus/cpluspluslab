//שיעור 3  דוגמא 10
//מחלקה עם שטחים דינמיים לטיפול במחרוזות
//אופרטורים והזזות

#include "Mystring.h"

int main()
{
    MyString s1("hello"); //ctor of s1

    MyString s2(s1); //copy ctor of st

    MyString s3("how are you?"); //ctor of s3

    cout << "--------" << endl;
    MyString s4 = s3; //copy ctor from s3 to s4

    cout << "--------" << endl;
    MyString s5 = f(); //??????

    cout << "--------" << endl;
    MyString s6("hi");
    s6 = s3; //assignment operator from s3 to s6

    cout << "--------" << endl;
    MyString s7("bye");
    s7 = f(); //?????

    cout << "--------" << endl;
    s2 = s2 + s4;

    cout << "--------" << endl;
    s1 = s1 * 4;

    cout << "--------" << endl;
    cout << s1 << endl;

    cout << "--------" << endl;
    MyString s8;
    cin >> s8;
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
