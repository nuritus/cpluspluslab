//שיעור 7  דוגמא 5
//הסתרה של שדה האב 


class Base
{
public:
	int B;
};

class Derived : public Base
{
public:
	int B; // נתון עם שם זהה לקיים במחלקת האב
};

void main()
{
	Derived obD;
	obD.B = 5;
	obD.Base::B = 4;
}
