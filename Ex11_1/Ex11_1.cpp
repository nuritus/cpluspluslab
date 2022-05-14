//שיעור 11  דוגמא 1
//דוגמא למיכל סדרתי - וקטור
//גנריות, שימוש באופרטור [] ובפעולות push_back at


#include <iostream>
using namespace std;
#include <vector> 
void main()
{
    vector <int> myVec; // creating an empty vector 
    for (int i = 0; i < 10; i++)
        myVec.push_back(i);
    for (int i = 0; i < 10; i++)
        cout << myVec[i] << "\t";//print the values inside the vector 

    try
    {
        cout << myVec.at(3) << endl;
        cout << myVec.at(11) << endl;
    }
    catch (...)
    {
        cout << "there is a problem with printing the value\n";
    }

}
