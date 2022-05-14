//שיעור 11  דוגמא 6
//פעולות שונות על רשימה

#define EX 4


#if EX==1

#include<iostream>
#include <string>
#include <list>
using namespace std;
class Person
{
private:
	bool married; //is have married or not
	string name;
public:
	Person(string _name, bool _married) :
		name(_name), married(_married)
	{};
	bool getmarried() { return married; };
	string getname() { return name; };

	void print() { cout << name << endl; };

	bool operator<(const Person& s2) const
	{
		return (name < s2.name);
	}
};
void main()
{
	list<Person> ls;
	Person s("moshe", false);
	ls.push_back(s);
	ls.push_back(Person("b", true));
	ls.push_back(Person("a", false));
	ls.push_back(Person("c", true));

	ls.sort();

	list<Person>::iterator itt;
	cout << "***************" << endl;
	for (itt = ls.begin(); itt != ls.end(); itt++)
	{
		(*itt).print();
	}
}


#elif EX==2

#include<iostream>
#include <string>
#include <list>
using namespace std;
void main() {
	list<int> ls;
	ls.push_back(3); //3
	ls.push_back(1); //3,1
	ls.push_front(2); //2, 3, 1
	cout << ls.front() << endl;//2
	cout << ls.back() << endl;
	list<int>::iterator  it = ls.begin();
	cout << *it << endl; //return the value that 'it' is pointed on
	ls.erase(ls.begin());//3,1 (erase 2)
	int x = ls.front(); //3
	cout << x << endl;
	ls.sort();//1,3
	x = ls.front();//1
	cout << x << endl;
	it = ls.begin();//1
	cout << *it << endl;//1
	cout << (*(++it)) << endl;//3
	ls.push_front(4); //4,1,3
	ls.push_back(4); //4,1,3,4
	ls.remove(4);//remove all elems with value 4
	x = ls.front();
	cout << x << endl;
	it = ls.begin();
	ls.insert(it, 4);//insert val 4 before it, 4,1,3
	it = ls.end();
	//cout<<*it<<endl;//???? will crash 
	//since end point to the 
	//last-the end of the list
	for (it = ls.begin(); it != ls.end(); it++)
		cout << *it << " ";
	cout << endl;
	ls.insert(ls.begin(), 5);//insert val 5 
			//before it, 5,4,1,3
	ls.insert(++(ls.begin()), 6); //5,6,4,1,3
	ls.insert((ls.begin())++, 7); //7,5,6,4,1,3 
			//no means for ++
}

#elif EX==3

#include <iostream>
#include <ctime>
#include <list>
using namespace std;
class A
{
protected:
	int a;
public:
	A() { a = rand() % 100; }
	virtual void print() { cout << "a=" << a << ' '; }
};
class B :public A
{
protected:
	int b;
public:
	B() :A() { b = rand() % 100; }
	virtual void print() override { A::print(); cout << "b=" << b << ' '; }
};
class C :public B
{
protected:
	int c;
public:
	C() :B() { c = rand() % 100; }
	void print() override final
	{
		B::print(); cout << "c=" << c << ' ';
	}
};


int main() {
	srand(time(nullptr));
	list<A*> lst;
	for (int i = 0; i < 5; i++) {
		A* ptr;
		int choice = rand() % 3;
		switch (choice)
		{
		case 0: ptr = new A();	break;
		case 1: ptr = new B();	break;
		case 2: ptr = new C();	break;
		};
		lst.push_back(ptr);
	}
	for (list<A*>::iterator it = lst.begin(); it != lst.end(); it++)
	{
		(*it)->print();
		cout << endl;
	}

	//כאן יש להגדיר לולאה שתבצע מחיקה של כל השטחים הדינמיים
	return 0;
}

#elif EX==4

#include<iostream>
#include <list>

using namespace std;
void main()
{
	list<int> lst1, lst2;
	for (int i = 0; i < 10; i += 2)
		lst1.push_back(i);
	for (int i = 1; i < 10; i += 2)
		lst2.push_back(i);
	cout << "befor merge: \n";
	list<int>::iterator it1 = lst1.begin();
	while (it1 != lst1.end())
		cout << *(it1++) << " ";
	list<int>::iterator it2 = lst2.begin();
	while (it2 != lst2.end())
		cout << *(it2++) << " ";
	lst1.merge(lst2);
	cout << "\n\nafter merge: \n";
	it1 = lst1.begin();
	while (it1 != lst1.end())
		cout << *(it1++) << " ";
	if (lst2.empty())
		cout << "\nlst2 is empty" << endl;
}


#endif 