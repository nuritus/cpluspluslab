//שיעור 11  דוגמא 7
//פעולות שונות על מחסנית ותור

#define EX 3


#if EX==1

#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> s; // has no iterator
	cout << "Pushing onto stack: ";
	for (int i = 0; i < 6; i++)
	{
		cout << " " << i;
		s.push(i);
	}
	for (int i = 12; i >= 6; i--)
	{
		cout << " " << i;
		s.push(i);
	}
	cout << endl;
	cout << "Stack size " << s.size() << endl;
	cout << " Top of stack is:";
	while (!s.empty())
	{
		cout << " " << s.top();
		s.pop(); // discards top of stack
	}
	cout << endl;
	cout << "Stack size " << s.size() << endl;
}

#elif EX==2

#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;
bool polindrom(string str)
{
	stack<char,vector<char>> s;
	int i = 0;
	for (; i < str.size() / 2; i++)
		s.push(str[i]);
	if (str.size() % 2)
		i++;
	while (!s.empty())
	{
		if (str[i++] != s.top()) return false;
		s.pop();
	}
	return true;
}
int main()
{
	char word[20];
	cout << "enter a word: ";
	cin >> word;
	if (polindrom(word))
		cout << word << " is polindrom\n";
	else cout << word << " is not polindrom\n";
	return 0;
}


#elif EX==3

#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue<int> q; // has no iterator
	for (int i = 0; i < 6; i++)
	{
		q.push(i);
	}
	cout << "Queue size " << q.size() << endl;
	cout << "Queue empty ? " << q.empty() << endl;
	cout << "Queue contains:";
	while (!q.empty())
	{
		cout << " " << q.front();
		q.pop(); // discards head of queue
	}
	cout << endl;
	cout << "Queue size " << q.size() << endl;
}


#endif 