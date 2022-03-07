//����� 3 - ����� 9
//�� ���� ������ ����� �� �����

#include<iostream>
using namespace std;
class XXX
{
public:
	int xxx;
	XXX(int xxx = 10) {
		cout << "CTOR " << endl;
		this->xxx = xxx;
	}
	XXX(XXX& xx) { cout << "Copy_CTOR" << endl; }
	XXX operator=(XXX xx)
	{
		xxx = xx.xxx;
		cout << "OPERATOR =" << endl;
		return *this;
	}
};

int main()
{
	XXX x1(5), x2;
	x2 = x1;
	cout << x2.xxx;
	return 0;
}

//������ ���:
//CTOR
//CTOR
//Copy_CTOR
//OPERATOR =
//Copy_CTOR
//- 1 - ��� ��� �����

