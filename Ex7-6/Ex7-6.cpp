//שיעור 7  דוגמא 6
//המרה בירושה
//עצם מסוג הבן הוא גם עצם מסוג האב, אך לא להיפך

#include <iostream>
using namespace std;

class Animal
{
public:
	float cageSize;
	int itemNum;
	bool carnivorous;
	int* feeding[7];

	Animal(int x)
	{};
};

class Bird : public Animal
{
public:
	float highetTopCage;

	Bird(float h) : Animal(5), highetTopCage(h)
	{};
};
int main()
{
	Animal* pA;
	Bird* pB;
	pA = new Animal(8); //ok!
	pB = new Bird(9); //ok!

	//pB = new Animal(3); //compilation error
	//cout << pB->highetTopCage; //run time error

	pA = new Bird(10);
	cout << pA->itemNum; //ok
	//pA->highetTopCage; //compilation error
	cout << ((Bird*)pA)->highetTopCage; //ok
}
