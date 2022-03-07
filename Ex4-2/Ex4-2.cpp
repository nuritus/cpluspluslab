//שיעור 4  דוגמא 2
//הצורך בפונקציה חברה


#include "Rational.h"
int main() {
    Rational num1(1, 2), num2(1, 4), num3;
    cout << "num1=";	num1.print();
    cout << "num2=";	num2.print();
    num3 = num1 + num2;
    cout << "num1+num2=";	num3.print();
    num3 = num1 * num2;
    cout << "num1*num2=";	num3.print();
    num3 = num1 + 5;
    cout << "num1+5=";
    num3.print();

    num3 = 5 + num1; //מה עושים??
    cout << "5+num1=";
    num3.print();
    return 0;
}
