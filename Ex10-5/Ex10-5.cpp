//����� 11  ����� 5
// ����� ��������

#include <iostream>
using namespace std;

void eql(int a, int b)
{
	if (a == b) 
		cout << "equal\n";
	else 
		cout << "not equal\n";
}
void main() {
	void (*p)(int, int); // ����� ������
	p = eql; // ���� �������� ���� ������
	p(4, 6); // ����� ������ ���������
}
