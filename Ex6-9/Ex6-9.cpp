#include <iostream>
#include "DoubleEndedList.h"
using namespace std;

void main()
{
	int element;
	DoubleEndedList    ls1, ls2;
	for (int i = 0; i < 5; i++)
	{
		ls1.add(i);
		cout << i << " ";
	}
	for (int i = 0; i < 5; i++)
	{
		element = ls1.firstElement();
		if (i < 2)
			ls1.removeFirst();

		cout << element << " ";
		ls2.addToEnd(element);
	}
	cout << endl;
	cout << ((ls2.search(1)) ? "ls2 includes 1" : "ls2 doesn't Include 1") << endl;
	cout << ((ls2.search(2)) ? "ls2 includes 2" : "ls2 doesn't Include 2") << endl;
	ls2.removeFirst();
	cout << ((ls2.search(2)) ? "ls2 includes 2" : "ls2 doesn't Include 2") << endl;
}
/*
Output
0 1 2 3 4 4 3 2 2 2
ls2 doesn't Include 1
ls2 includes 2
ls2 includes 2
*/
