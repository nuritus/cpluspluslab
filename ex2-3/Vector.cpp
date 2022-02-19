#include "Vector.h"
#include <iostream>
using namespace std;

Vector::Vector() //בנאי
{//אם לא נבצע את האיתחול של המערך בבנאי - ביצוע שאר הפונקציות יביא לשגיאת זמן ריצה
    cout << "enter 10 numbers\n";
    for (int i = 0; i < 10; i++)
        cin >> numbers[i];
}

//פונקציות חיבור
int Vector::add() //מחזירה את הסכום של איברי המערך
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
        sum += numbers[i];
    return sum;
}

void Vector::add(int number)//מוסיפה את הפרמטר לכל מקום במערך
{
    for (int i = 0; i < 10; i++)
        numbers[i] += number;
}

void Vector::add(int number, int place)//מוסיפה את הפרמטר לאינדקס מסוים
{
    numbers[place] += number;
}

