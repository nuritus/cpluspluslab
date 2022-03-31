//שיעור 7  דוגמא 1
//אתחול ע"י בנאי ברירת מחדל של האב 

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
    Animal()
    {
        cageSize = 5;
        itemNum = 7;
        carnivorous = false;
        cout << "base constractor\n";
    }
};
class Bird : public Animal
{
private:
    float highetTopCage;
public:
    Bird(float h) //: Animal(), highetTopCage(h)
    {
        cout << "drived constractor\n";
    }
};

int  main()
{
    Bird  parrot(2.6);
}

