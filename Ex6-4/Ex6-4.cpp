//����� 6  ����� 4
//����� ����� ������� 


class Animal {
public:
	float cageSize;
	int itemNum;
	bool carnivorous;
	int* feeding[7];
};

class Bird : public Animal { //����� ��� ��� �� ���
public:
	float highetTopCage;
};

class Fish : public Animal {
public:
	float waterDepth;
	bool freshWater;
};

int  main() {
	Bird  parrot; //����� ��� ��� �� ���
	parrot.cageSize = 25;
	parrot.itemNum = 15;
	parrot.highetTopCage = 3.5;
	return 0;
}
