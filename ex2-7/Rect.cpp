#include "Rect.h"

Rect::Rect()
{
	width = new int;
	*width = 5;
	height = new int;
	*height = 5;
}

Rect::Rect(int a, int b)
{
	width = new int;
	*width = a;
	height = new int;
	*height = b;
}

//destructor
Rect::~Rect()
{
	if (width)
		delete width;
	width = NULL;
	if (height)
		delete height;
	height = NULL;
}

