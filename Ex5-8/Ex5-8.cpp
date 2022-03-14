//שיעור 5  דוגמא 8
//שימוש במנגנון החריגות באופן פשוט
//החריגה מטופלת בתוך הפונקציה


#include <iostream>
using namespace std;



int divi(int moneh, int mechane)
{
    try {
        if (mechane == 0)
            throw 0;
        return moneh / mechane;
    } // try
    catch (int a)
    {
        cout << "Caught exception number:  "
            << a << endl;
        return 0;
    } // catch
} // divi

int main()
{
    int x = 8; int y = 3;
    int z = divi(x, y);
    cout << x << "/" << y << " = " << z << endl;  x = 17;  y = 0;
    z = divi(x, y);
    cout << x << "/" << y << " = " << z << endl;;

}