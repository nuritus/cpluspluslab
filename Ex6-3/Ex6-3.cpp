//שיעור 6  דוגמא 3
//מחלקה פנימית 
//הרשאות גישה, סדר איתחול וצורת כתיבה



#include <string>
using namespace std;
class Animal
{
public:
	float cageSize; //גודל הכלוב
	int itemNum; //מספר פריטים בכלוב
	bool carnivorous; //טורף?
	int* feeding[7];//שעות האכלה בשבוע

	string clean() { return "I clean"; }

};

class Fish { //לא יעיל 1: יצירת מחלקה חדשה באופן מלא
public:
	float cageSize;
	int itemNum;
	bool carnivorous;
	int* feeding[7];
	float waterDepth;
	bool freshWater;
};

class Bird {//לא יעיל 2: יצירת שדה מסוג חיה
public:
	Animal animal;
	float highetTopCage;
};

int main()
{
	Animal elephant, lion;//עצמים מסוג חיה

	Fish sherk;
	sherk.clean(); //חובה להגדיר כל פונקציה ושדה מחדש

	Bird seagull;
	seagull.animal.cageSize = 10; //לא נוח וגם לא הגיוני. יש לציפור חיה??
}

