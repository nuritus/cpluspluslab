//����� 4  ����� 5
//������ �����


#include <iostream>
using namespace std;

class Rect
{
	int length, width;
public:

	int& operator [](int index) //���� ����� lvalue ����� ����
	{
		if (index == 0)
			return length;
		return width;
	}
};

int main()
{
	Rect r;
	r[0] = 1; //���� ����� ����� �����
	r[1] = 2;
	cout << r[0] << r[3]; //�� ���� ����� �� ���� rvalue
	return 0;
}
