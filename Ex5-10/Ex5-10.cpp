//����� 5  ����� 10
//����� ������� ������� 
//������ ������ �����, ��� ���� ����� ����
//���� ���� ���� - ����� �������� ������ ������ ������

#include <iostream>
using namespace std;

void f()
{
	throw 23.0;
}
void main() {
	try 
	{
		f(); 
	}

	catch (string s)
	{
		cout << "string!" << endl;
	}
	catch (...)
	{
		cout << "An exception!" << endl;
	}
	catch (double d) //����� ���������. ��� �� �� ��� ����� ��� ��� ���� ��� ���� ����� ��
	{
		cout << "double!" << endl;
	}
	cout << "End of program" << endl;
}
