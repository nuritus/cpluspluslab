//����� 6  ����� 5
//����� ����� ������� 
//����� ������. ����� ����� �� �� ���


#include <iostream>
using namespace std;

class father {
public:
	void message(){ cout << "father - message"; }
	void print() { cout << "father�print"; }
};

class child : public father {
public:
	void print() { cout << "child�print"; }
};

int main() {
	father papa;
	child zuzik;
	zuzik.message();
	papa.print();
	zuzik.print();//����� �� �������� ���

	zuzik.father::print();
}
