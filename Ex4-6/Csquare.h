#ifndef CRE
#define CRE
#include "Crectangle.h"

//class CRectangle; // ������ ��� ���� ���� ��� ����� ���. ���� ����� ��� ����


class CSquare {
private:
	int side;
public:
	void set_side(int a) {
		side = a;
	}
	friend class CRectangle;
};
#endif
