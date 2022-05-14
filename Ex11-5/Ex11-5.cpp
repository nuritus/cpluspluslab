//שיעור 11  דוגמא 4
//פעולות שונות על ווקטור

#define EX 4

#if EX==1

#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> v;
	vector<int>::iterator it, start, end;
	for (int i = 0; i < 10; i++)
		v.push_back(i);

	cout << "v size = " << v.size() << endl;
	start = v.begin();
	start += 3; // now points at element [3]
	end = start;
	end += 4; // now points at element [7]
	v.erase(start, end); // erases 3,4,5,6
	cout << "v size = " << v.size() << endl;
	for (it = v.begin(); it < v.end(); it++)
		*it *= 10;//cout << *it;
	cout << "v contains: ";
	for (int i = 0; i < v.size(); i++)
		cout << " " << v[i];
	cout << endl;
}

#elif EX==2

#include<iostream>
#include <vector>
using namespace std;

void main()
{
	vector<char> v(20); //0 0 0 0 0 0 …
	cout << v.capacity() << " " << v.size() << endl; //size=20

	vector<char>::iterator itC = v.begin();
	v.insert(itC, 'a'); //push to the front and resize the vector size with 1
	cout << v.capacity() << " " << v.size() << endl;//size=21, capacity=?
	v.insert(itC + 3, 'b');
	cout << v.capacity() << " " << v.size() << endl; //size=22
	for (int i = 0; i < 100; i++)
		v.insert(v.begin(), 'c');
	cout << v.capacity() << " " << v.size() << endl;

	v[8] = 'g'; //dont push and dont resize, only change the value
	cin >> v[9];
	cout << endl;
	cout << v[0] << " " << v[2] << endl;
}


#elif EX==3

#include <iostream>
#include <vector>
using namespace std;

void display(const char* vecName, vector<int> vec)
{
	cout << vecName << ": ";
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
		cout << ' ' << *it;
	cout << '\n';
}
int main() {
	vector<int> v1;        // empty vector of ints
	vector<int> v2(40, 100);// 40 ints with value 100
	vector<int> v3(v2.begin() + 4, v2.end() - 3);   //
	// iterating through second
	int myints[] = { 16,2,77,29 };
	vector<int> v4(myints, myints + 2);
	display("v1", v1);
	display("v2", v2);
	display("v3", v3);
	display("v4", v4);
	return 0;
}

#elif EX==4

#include<iostream>
#include <string>
#include <vector>
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
	vector<Person*> Personsvec;
	Person* tmp = new Person("yossi", true);
	Personsvec.push_back(tmp);
	tmp = new Person("david", false);
	Personsvec.push_back(tmp);
	tmp = new Person("moshe", true);
	Personsvec.push_back(tmp);
	tmp = new Person("avi", false);
	Personsvec.push_back(tmp);

	vector<Person*>::iterator itS;
	for (itS = Personsvec.begin(); itS != Personsvec.end(); itS++)
	{
		if ((*itS)->getmarried())
			(*itS)->print();
	}
	//…

	for (itS = Personsvec.begin(); itS != Personsvec.end(); itS++)
	{
		if (*itS)
			delete (*itS);
	}

}



#endif 