#include <iostream>
using namespace std;

const int DEF_CAPACITY = 100;

class Vector
{
protected:
	int* data;
	int size;		//size in use
	int capacity;	//available capacity
public:
	//constructors
	Vector(int capacity = DEF_CAPACITY);
	Vector(const Vector& v);
	~Vector();
	//operations
	Vector& operator = (const Vector&);
	//modify
	int& operator [](int index);
	//view
	const int& operator [](int index) const;
	int	getSize() const;
	int  getCapacity() const;
	void insert(int value);
	void  clear();
	int  delLast();
};

