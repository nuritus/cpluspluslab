//����� 7  ����� 5
//����� �� ��� ��� 


class Base
{
public:
	int B;
};

class Derived : public Base
{
public:
	int B; // ���� �� �� ��� ����� ������ ���
};

void main()
{
	Derived obD;
	obD.B = 5;
	obD.Base::B = 4;
}
