//שיעור 6  דוגמא 4
//ירושה פשוטה ציבורית 


class Animal {
public:
	float cageSize;
	int itemNum;
	bool carnivorous;
	int* feeding[7];
};

class Bird : public Animal { //ציפור היא סוג של חיה
public:
	float highetTopCage;
};

class Fish : public Animal {
public:
	float waterDepth;
	bool freshWater;
};

int  main() {
	Bird  parrot; //ציפור היא סוג של חיה
	parrot.cageSize = 25;
	parrot.itemNum = 15;
	parrot.highetTopCage = 3.5;
	return 0;
}
