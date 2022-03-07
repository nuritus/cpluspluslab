#ifndef CRE
#define CRE
#include "Crectangle.h"

//class CRectangle; // ההצהרה הזו חובה כאשר אנו בקובץ אחד. בכמה קבצים אין צורך


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
