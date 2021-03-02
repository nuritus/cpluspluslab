// שיעור 2 - דוגמא 7
// מחלקת מלבן דינמית
//זימוני הורסים ומחיקת זיכרון

#include "Rect.h"

int main()
{
	Rect rect(3, 4);
	Rect rectb;
	cout << "rect area: " << rect.area() << endl;
	cout << "rectb area: " << rectb.area() << endl;

	Rect* pRect;
	pRect = new Rect(4, 6); // pRect = new Rect;
	cout << "pRect area : " << pRect->area() << endl;

	for (int i = 1; i < 4; i++)
	{
		Rect recta(i, i);
		cout << "recta area: " << recta.area() << endl;
	}//here, a moment before every iteration i is ended, 1 dtor will be called automatically for recta


	if (pRect)
		delete pRect;//call the dtor for pRect

	return 0;//here, a moment before main is ended, 2 dtors will be called automatically for rect and rectb

}
