//שיעור 4  דוגמא 6
//מחלקה חברה

#include"CRectangle.h"
#include"Csquare.h"
#include <iostream>
using namespace std;

int main()
{
	CSquare sqr;
	CRectangle rect;
	sqr.set_side(4);
	rect.convert(sqr);
	cout << rect.area();
	return 0;
}
