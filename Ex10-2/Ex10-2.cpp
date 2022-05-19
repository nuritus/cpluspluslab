//שיעור 11  דוגמא 2
//מחלקת עץ של מחרוזות יורשת מעץ חיפוש
//עבור כל עץ יודע להפעיל את הפונקציה הנכונה

#include<iostream>
#include"SearchTree.h"
#include"StringTree.h"

using namespace std;
int main()
{
	SearchTree<int> T1;
	for (int i = 0; i < 10; i++)
	{
		int key = rand() % 100;
		cout << key << ' ';
		T1.add(key);
	}
	cout << endl << "inorder: ";
	T1.inOrder();
	cout << endl << "preorder: ";
	T1.preOrder();
	cout << endl << "postorder: ";
	T1.postOrder();



	cout << endl << "*************************" << endl;
	StringTree T2;
	string word;
	cout << "enter 10 words\n";
	for (int i = 0; i < 10; i++)
	{
		cin >> word;
		T2.add(word);
	}

	((SearchTree<string>)T2).inOrder();
	cout << endl;
	T2.inOrder();
	((SearchTree<string>)T2).inOrder();
	cout << endl;

}

//הערה חשובה
//מסתבר שכאשר מתבצעת המרה - מופעל בנאי העתקה והורס
//זה משמעותי כשמדובר בlvalue
//רואים כאן גם דרך לבצע המרה כאשר הילד לא גנרי