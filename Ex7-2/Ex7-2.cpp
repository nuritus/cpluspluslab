//שיעור 7  דוגמא 2
//אתחול ע"י בנאי פרמטר של האב 

#include <iostream>
using namespace std;

class Animal
{
private:
    float cageSize;
    int itemNum;
    bool carnivorous;
    int* feeding[7];
public:
    Animal(float c, int i, bool v) : cageSize(c), itemNum(i), carnivorous(v)
    {
        cout << "base constractor\n";
    }
};
class Bird : public Animal
{
private:
    float highetTopCage;
public:
    Bird(float h)// : Animal(2, 3, false), highetTopCage(h)//אם אין זימון - שגיאת קומפילציה

    {
        cout << "drived constractor\n";
    }
};

int  main()
{
    Bird  parrot(2.6);
}

