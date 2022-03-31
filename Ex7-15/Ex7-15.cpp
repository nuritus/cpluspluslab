//שיעור 7  דוגמא 15
// פולימורפיזם של מבנה נתונים
// ע"י שימוש במצביע

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
	Animal(float c=0, int i=0, bool v=true) : cageSize(c), itemNum(i), carnivorous(v)
	{
		cout << "base constractor\n";
	}
	virtual void clean() { cout << "Use a broom" << endl; }
};

class Fish : public Animal
{
	int waterDepth;
	void clean()
	{ 
		if (waterDepth > 3) 
			cout << "Use a fishhook" << endl; 
	}
};
class Bird : public Animal
{
private:
	float highetTopCage;
public:
	Bird(float h=0) : Animal(2, 3, false), highetTopCage(h)
	{
		cout << "drived constractor\n";
	}
	virtual void clean() 
	{
		if (highetTopCage > 5)
			cout << "Use a crane" << endl; 
	}
};

int  main()
{
	Animal* zoo[3];
	Fish shark;
	Bird parrot;
	Animal lion;

	zoo[0] = &shark;
	zoo[1] = &parrot;
	zoo[2] = &lion;
	for (int i = 0; i < 3; i++)
		zoo[i]->clean();
	shark.clean();//שימו לב שדרך האב יכלנו לגשת - אבל דרך הבן לא. פונקציה פרטית
}
