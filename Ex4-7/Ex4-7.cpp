//שיעור 4  דוגמא 7
//הדגמה נוספת של הדפסות מההזזות

#include <iostream>
#include <ctime>
using namespace std;

class Vector
{
public:
	int* numbers;
	int size;

	Vector(int Size = 10);
	Vector(const Vector& vec);	//copy ctor
	//Vector(Vector&& vec); //move copy ctor
	Vector& operator=(const Vector& vec); //simple assignment operator
	//Vector& operator=(Vector&& vec); //move assignment operator
	~Vector();
	void print();
};

Vector::Vector(int Size)
{
	size = Size;
	numbers = new int[size];

	srand((unsigned)time(NULL));

	for (int i = 0; i < size; i++)
		numbers[i] = rand() % 100;

	cout << "ctor random" << endl;
}

Vector::Vector(const Vector& vec)
{//copy ctor
	size = vec.size;

	numbers = new int[size];

	for (int i = 0; i < size; i++)
		numbers[i] = vec.numbers[i];

	cout << "copy ctor" << endl;;
}

//Vector::Vector(Vector&& vec)
//{ //move ctor
//	size = vec.size;
//
//	numbers = vec.numbers;
//	vec.numbers = nullptr; //very important!!!
//
//	cout << "move ctor" << endl;;
//}


Vector& Vector::operator=(const Vector& vec)
{// simple assignment operator

	size = vec.size;

	if (numbers)
		delete[] numbers;

	if (vec.numbers)
	{
		numbers = new int[size];
		for (int i = 0; i < size; i++)
			numbers[i] = vec.numbers[i];
	}
	else
		numbers = nullptr;

	cout << "operator=" << endl;;

	return *this;


}

//Vector& Vector::operator=(Vector&& ms)
//{ // move assignment operator
//
//	size = ms.size;
//
//	if (numbers)
//		delete[] numbers;
//
//	numbers = ms.numbers; // steal (dont copy) rvalue's data
//	ms.numbers = nullptr; //very important!!!
//
//	cout << "move operator=" << endl;;
//
//	return *this;
//}


Vector::~Vector()
{
	if (numbers)
		delete[] numbers;
	//numbers = nullptr; //do not do it!!!!!!!!!! why?

	cout << "dtor" << endl;
}

void Vector::print()
{
	for (int i = 0; i < size; i++)
		cout << numbers[i] << ' ';
	cout << endl;
}

Vector getVec()
{
	Vector  vLocal;  //ctor random

	return vLocal; //copy ctor or move ctor    //assignment operator or move assignment operator
} //dtor of vLocal

int main()
{
	cout << "----------------" << endl;
	Vector vec7 = getVec(); //move ctor wiil be called  (if we wont override it then the copy ctor will be called)

	cout << "----------------" << endl;

	Vector vec8; //ctor
	vec8 = getVec();  //move assignment operator will be called (if we wont override it then the simple assinment operator will be called)

	cout << "----------------" << endl;
}

/*
------------------------------
output is with NO move sementics:
------------------------------
----------------
ctor random
copy ctor
dtor
----------------
ctor random
ctor random
copy ctor
dtor
operator=
dtor
----------------
dtor
dtor

------------------------------
output is with move sementics:
------------------------------

----------------
ctor random
move ctor
dtor
----------------
ctor random
ctor random
move ctor
dtor
move operator=
dtor
----------------
dtor
dtor

*/
