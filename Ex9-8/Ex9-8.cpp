//����� 9  ����� 6
//��������
//���� ������ ���� ���, ���� ����� ����


template <class T, class K>
T SomeFunc(K k1)
{
	//...
	//�� ������ ���� ��������� ���� �� - ����� ��� ����� ���. ����� ��"�
};

template <class T, class K>
class SomeClass
{
	//...
	T f1;
	K f2;
};

template <class T, int size>
class Stack
{
	//...
		T buf[size];
};


template <class T = int, class U = int>
class myclass
{};

int main()
{
	int x = SomeFunc<int, char>('f');
	
	SomeClass<int, char> obj;
	
	Stack<int, 128> mystack1;
	Stack<int, 56> mystack2;

	myclass <> ob;

}