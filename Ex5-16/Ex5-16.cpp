//����� 5  ����� 15
//������ �� STL 
//����� ��� ������� ��� exception safety

#include <iostream>
using namespace std;

int main()
{
	try {
		string mystr("hello");
		//cout << mystr[10];
		cout << mystr.at(10);
	}
	catch (...)
	{
		cout << "abort not called";
	}
}