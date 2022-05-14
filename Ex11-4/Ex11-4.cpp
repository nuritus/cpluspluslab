//שיעור 11  דוגמא 4
//סוגי איטרטורים
//איתחול נוסף, שימוש ברשימה

#include <iostream>
using namespace std;
#include <vector>
#include <list>

void main()
{
	string arr1[5] = { "tee", "coffee", "wine", "coke", "water" };
	vector<string> v1(arr1, arr1 + 5);
	vector<string>::iterator it = v1.begin();
	while (it != v1.end())
	{
		cout << *it << ", "; 
		++it;
	}

	string arr2[6] = { "cat", "dog", "horse", "bear", "mouse", "fox" };
	list<string> l1(arr2, arr2 + 6);
	list<string>::reverse_iterator rit = l1.rbegin();
	while (rit != l1.rend())
	{
		cout << *rit << ", "; 
		++rit;
	}


	list<int> val;
	val.push_front(2);
	val.push_front(3);
	val.push_back(4);
	val.push_back(5);
	list<int>::const_iterator curr = val.begin();
	int max = *curr++;

	while (curr != val.end()) {
		if (*curr > max) {
			max = *curr;
		}
		++curr;
	}
	cout << "the biggest is : " << max << endl;

}