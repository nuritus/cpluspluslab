//שיעור 11  דוגמא 6
// מצביע לפונקציה
//בתור פרמטר של פונקציה

#include <iostream>
using namespace std;
int operation (int x, int y, int (*funcToCall)(int, int)) 
{
    int g;
    g = (*funcToCall)(x, y);
    return (g);

    //return funcToCall(x,y);
}

int addition(int a, int b)
{ 
    return (a + b); 
}

int subtraction(int a, int b) 
{ 
    return (a - b); 
}


int main() {
	int (*minus)(int, int) = subtraction;

	int a, b, c;
	a = operation(7, 5, addition);
	b = operation(10, a, subtraction);
	c = operation(100, b, minus);
	cout << a << " " << b << " " << c << endl;
	return 0;

}





//דוגמא ישנה

struct Mashke {
	int kod;
	int kamut;
	char str[10];
};
int cmp1(void* elem1, void* elem2)
{
	return (*(int*)elem1 - *(int*)elem2);
}
int cmp2(void* elem1, void* elem2)
{
	Mashke* k1 = (Mashke*)elem1, * k2 = (Mashke*)
		elem2;
	return (k1->kamut - k2->kamut);
}
int cmp3(void* elem1, void* elem2)
{
	Mashke* k1 = (Mashke*)elem1, * k2 = (Mashke*)elem2;
	return strcmp(k1->str, k2->str);
}

void* maxspecial(void* base, int n, int size, int
(*comparator)(void*, void*)) {
	void* makom = base;
	for (int i = 1; i < n; i++)
		if (comparator((char*)base + (i * size), makom) > 0)
			makom = (char*)base + (i * size);
	return makom;
}
int main()
{
	int v[] = { 1,3,7,2,4,0 };
	Mashke k[] = { {1,20,"vodka"}, {2,8,"water"},
	{3,100,"bira"}, {4,20,"wine"} };
	int* gadolint = (int*)maxspecial(v, 6, sizeof(int), cmp1);
	cout << *gadolint << " hu hamispar hagadol" << endl;
	Mashke* bigMashke;
	bigMashke = (Mashke*)
		maxspecial(k, 4, sizeof(Mashke), cmp2);
	cout << bigMashke->str << " hu haMashke hameirabi(kamut)" << endl;
	bigMashke = (Mashke*)
		maxspecial(k, 4, sizeof(Mashke), cmp3);
	cout << bigMashke->str << " hu haMashke baal hashem hachi gadol" << endl;
	return 0;
}


