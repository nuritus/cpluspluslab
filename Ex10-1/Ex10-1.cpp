#include <iostream>
using namespace std;
#include "SearchTree.h"

int main()
{
	SearchTree<int> T1;
	cout << "enter 10 numbers\n";
	int x, y;
	for (int i = 0; i < 10; i++)
	{
		cin >> x;
		T1.add(x);
	}
	cout << "inorder: ";
	T1.inOrder();
	cout << "\nenter 0-6:\n";
	cin >> x;
	while (x != 0)
	{
		switch (x)
		{
			//	case 1: cout << "# of leaves: " << T1.leaves() << endl;
			break;
			//	case 2: cout << "height of tree: " << T1.height() << endl;
			break;
			//	case 3:T1.reflect();
			cout << "reflected tree: ";
			T1.inOrder();
			//		T1.reflect();
			cout << endl;
			break;
			//	case 4: cout << "# left sons only: " << T1.onlyLeftSon() << endl;
			break;
		case 5: cout << "enter a number ";
			cin >> y;
			//		cout << "level of " << y << " on tree: " << T1.level(y) << endl;
			break;
		case 6: cout << "enter a number ";
			cin >> y;
			T1.remove(y);
			cout << "after removing " << y << ": ";
			T1.inOrder();
			cout << endl;
		}
		cout << "enter 0-6:\n";
		cin >> x;
	}
	return 0;
}

