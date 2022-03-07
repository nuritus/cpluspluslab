#ifndef CSQ
#define CSQ

#include "Csquare.h"
class CSquare;
class CRectangle {
private:
	int width, height;
public:
	int area(void) {
		return (width * height);
	}
	void convert(CSquare a);
};
#endif
