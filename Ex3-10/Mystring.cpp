// String.cpp
#include "MyString.h"

MyString::MyString(const char* s)
{
    if (s)
    {
        len = strlen(s);
        str = new char[len + 1];
        strcpy_s(str, len + 1, s);
    }
    else
        str = nullptr;

    cout << "ctor: " << str << endl;
}

MyString::MyString(const MyString& ms)
    : MyString(ms.str)
{
    cout << "copy ctor: " << str << endl;
}
MyString& MyString::operator=(const MyString& ms)
{
    len = ms.len;

    if (str)
        delete[] str;

    if (ms.str)
    {
        len = strlen(ms.str);
        str = new char[len + 1];
        strcpy_s(str, len + 1, ms.str);
    }
    else
        str = nullptr;

    cout << "operator= : " << str << endl;

    return *this;
}

MyString::~MyString()
{
    if (str) //very important!!!
        delete[] str;
    str = nullptr;

    cout << "dtor" << endl;
}
MyString MyString::operator+(const MyString& ms) const
{
    int sizeI = len;
    int sizeII = ms.len;
    char* temp = new char[sizeI + sizeII + 1];

    strcpy_s(temp, sizeI + 1, str);
    strcpy_s(temp + sizeI, sizeII + 1, ms.str);

    MyString x(temp);

    cout << "operator+ : " << str << endl;

    return x;
}

bool MyString::operator==(const MyString& ms) const
{
    cout << "operator== : " << str << endl;

    return !strcmp(str, ms.str);
}
MyString MyString::operator*(const int num) const
{
    char* temp;
    temp = new char[len * num + 1];

    for (int i = 0; i < num; i++)
        strcpy_s(temp + i * len, len + 1, str);

    MyString s(temp);

    cout << "operator* : " << str << endl;

    return s;
}

ostream& operator<<(ostream& os, const MyString& ms)
{
    if (ms.str)
        os << ms.str << endl;

    cout << "operator<< : " << ms.str << endl;

    return os;
}

istream& operator>>(istream& is, MyString& ms)
{
    if (ms.str)

        delete ms.str;

    char temp[100];

    is >> temp;

    ms.len = strlen(temp);

    ms.str = new char[ms.len + 1];

    strcpy_s(ms.str, ms.len + 1, temp);

    cout << "operator>> : " << ms.str << endl;

    return  is;

}

MyString::MyString(MyString&& ms)
{  // move constructor

    len = ms.len;
    str = ms.str; // steal (dont copy) rvalue's data
    ms.str = nullptr; //very important!!!

    cout << "move ctor" << endl;
}



MyString& MyString::operator=(MyString&& ms)
{ // move assignment operator

    if (str)
        delete[] str;

    len = ms.len;
    str = ms.str; // steal (dont copy) rvalue's data
    ms.str = nullptr;

    cout << "move operator=" << endl;;

    return *this;
}
