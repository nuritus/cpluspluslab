//����� 11  ����� 2
//����� ����� ����� - �����
//�������� ������, ����� ��������

#include <iostream>
using namespace std;
#include <vector> 
void main()
{
	vector <int> v(5);
	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}

	vector <char> vec(6, 'x');
	vector<char>::iterator p = vec.begin();
	while (p != vec.end()) {
		cout << *p << " ";
		++p;
	}
}