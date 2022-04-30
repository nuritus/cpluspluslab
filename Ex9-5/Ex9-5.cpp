//שיעור 9  דוגמא 5
//מחלקה תבניתית

#include <iostream>
using namespace std;

template<class T>
class myClass {
	T first;
	T second;
public:
	myClass(T x, T y) { first = x; second = y; }
	T small();
};

template<class T>
T myClass<T> ::small() {
	return first < second ? first : second;
}

int main()
{
	myClass <int>ex1(28, 17);
	cout << ex1.small();
}
