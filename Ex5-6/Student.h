#pragma once

#include <iostream>
using namespace std;
class Student
{
    int id;
public:
    static int n ; //�� ���� ����� ������ ����� ���� �� ����
    int a=0;
    Student() { n++; };
    ~Student() { n--; };

    static int SomeStaticFunc()
    {
        //cout << a; //compilation error
        return n;
    };
};

