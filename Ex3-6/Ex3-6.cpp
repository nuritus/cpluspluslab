//����� 3 - ����� 6
//�������� move ����� ����� ������ ������� ����

#include <map>//���� ������ ����� - �� ����� �����...
using namespace std;

void swap(map<int, char>& a, map<int, char>& b)
{
	map<int, char> t = move(a);  // lvalue �������� �����
	a = move(b);
	b = move(t);
}


