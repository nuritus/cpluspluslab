//שיעור 11  דוגמא 8
// מצביע לפונקציה
//מערך של מצביעים

#include <iostream>
using namespace std;


typedef double (*Addition)(double value1, double value2);

double Add(double x, double y) { return x + y; }

double Sub(double x, double y) { return x - y; }

int main() {
    Addition* funpointer;
    funpointer = new Addition[2];
    funpointer[0] = Add;
    funpointer[1] = Sub;

    for (int i = 0; i < 2; i++)
        cout << funpointer[i](10, 20) << endl;
}


