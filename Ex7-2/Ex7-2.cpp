//����� 7  ����� 2
//����� �"� ���� ����� �� ��� 

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
    Bird(float h)// : Animal(2, 3, false), highetTopCage(h)//�� ��� ����� - ����� ���������

    {
        cout << "drived constractor\n";
    }
};

int  main()
{
    Bird  parrot(2.6);
}

