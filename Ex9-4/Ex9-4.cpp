//שיעור 9  דוגמא 4
//פולימורפיזם של אלגוריתם
//ע"י פונקציה תבניתית

#include <iostream>
using namespace std;


template <class T>
void Swap(T& x, T& y)
{
	T tmp = x;
	x = y;
	y = tmp;
}

template <class T>
void bubbleSort(T vec[], int size)
{
	for (int last = size - 1; last > 0; last--)
		for (int i = 0; i < last; i++)
			if (vec[i + 1] < vec[i])
				Swap<T>(vec[i], vec[i + 1]);
}

template <class T>
void print(T vec[], int size)
{
	for (int i = 0; i < size; i++)
		cout << vec[i] << ' ';
	cout << endl;
}
int main()
{
	int integers[10];
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
		integers[i] = rand() % 100;
	bubbleSort<int>(integers, 10);
	print<int>(integers, 10);

	char characters[5];
	for (int i = 0; i < 5; i++)
		characters[i] = (rand() % 26) + 65;
	bubbleSort<char>(characters, 5);
	print<char>(characters, 5);
	return 0;
}
