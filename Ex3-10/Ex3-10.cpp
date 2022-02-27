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
