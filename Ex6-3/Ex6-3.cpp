//����� 6  ����� 3
//����� ������ 
//������ ����, ��� ������ ����� �����



#include <string>
using namespace std;
class Animal
{
public:
	float cageSize; //���� �����
	int itemNum; //���� ������ �����
	bool carnivorous; //����?
	int* feeding[7];//���� ����� �����

	string clean() { return "I clean"; }

};

class Fish { //�� ���� 1: ����� ����� ���� ����� ���
public:
	float cageSize;
	int itemNum;
	bool carnivorous;
	int* feeding[7];
	float waterDepth;
	bool freshWater;
};

class Bird {//�� ���� 2: ����� ��� ���� ���
public:
	Animal animal;
	float highetTopCage;
};

int main()
{
	Animal elephant, lion;//����� ���� ���

	Fish sherk;
	sherk.clean(); //���� ������ �� ������� ���� ����

	Bird seagull;
	seagull.animal.cageSize = 10; //�� ��� ��� �� ������. �� ������ ���??
}

