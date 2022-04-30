//שיעור 8  דוגמא 3
//הפקודה ovveride - תזכורת
//יש לבדוק כל אחת מהמתודות עם ובלי override


#include <iostream>
using namespace std;


class base
{
public:
	virtual void testA(float x) { cout << "testA base" << endl; };
	virtual void testB(float x) = 0;
	virtual void testC() const { cout << "testC base" << endl; };
	void testD() { cout << "testD base" << endl; };
};

//with 'override'  
class derived2 : public base
{
public:
	int testA(int x) override { cout << "testA derived2" << endl; };
	void testB(int x) override { cout << "testB derived2" << endl; };
	void testC() override { cout << "testC derived2" << endl; };
	void testD() override { cout << "testD derived2" << endl; };

};


//with 'override' all is ok
//class derived1 : public base
//{
//public:
//	void testA(float x) override { cout << "testA derived1" << endl; };
//	void testB(float x) override { cout << "testB derived1" << endl; };
//	void testC() const override { cout << "testC derived1" << endl; };
//	void testD() { cout << "testD derived1" << endl; };
//};



void main()
{
	base* pB3 = new derived3; //compilation error לפעמים
	pB1->testA(5.8);//testA derived1 או testA base
	pB1->testB(4.7);//testB derived1
	pB1->testC();//testC derived1 או testC base
	pB1->testD();//testD base

}
