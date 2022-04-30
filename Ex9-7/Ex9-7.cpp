//שיעור 9  דוגמא 7
//מחלקה תבניתית- וקטור
//כיצד הופכים מחלקה לגנרית

#include <iostream>
using namespace std;

#include "GenericVector.h"

int main()
{
	Vector <int> nums;
	Vector <float> rels;
	nums.insert(58);
	nums.insert(42);
	rels.insert((float)58 / 100);
	rels.insert((float)42 / 100);
	for (int index = 0; index < nums.getSize(); index++)
		cout << nums[index] << "  ";
	cout << endl;
	for (int index = 0; index < rels.getSize(); index++)
		cout << rels[index] << "  ";
	return 0;
}

