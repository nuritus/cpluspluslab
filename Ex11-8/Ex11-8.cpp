//שיעור 11  דוגמא 8
//שימוש באיטרטור
//typedef תכנות גנרי

#include <iostream>
#include <vector>


using namespace std;
typedef vector<int>::reverse_iterator it;

void print(it first, it last, const char* title) {
	cout << title << endl;
	while (first != last)
		cout << *first++ << '\t';
	cout << endl;
}

template <class T>
void genericprint(T first, T last, const char* title) {
	cout << title << endl;
	while (first != last)
		cout << *first++ << '\t';
	cout << endl;
}

void display(const char* vecName, vector<int> vec)
{
	cout << vecName << ": ";
	for (auto it = vec.begin();
		it != vec.end();
		++it)
		cout << ' ' << *it;
	cout << '\n';
}

int main() {
	int data[3] = { 9, 10, 11 };
	vector<int> d(data, data + 3);
	
	it p = d.rbegin();
	print(p, d.rend(), "Reverse");
	//print(d.begin(), d.end(), "har");
	
	genericprint(p, d.rend(), "Reverse");
	genericprint(d.begin(), d.end(), "har");

	display("the vector: ", d);
	return 0;
}
