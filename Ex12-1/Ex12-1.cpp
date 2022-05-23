#include <iostream>

using namespace std;


//a function for printing numbers in binary

void printBinary(const char* str, const unsigned char val) 
{

	cout << str;

	for (int i = 7; i >= 0; i--)

		if (val & (1 << i))

			cout << "1";

		else

			cout << "0";

	cout << endl;

}

void printBinary2(string str, const unsigned int val)
{
	cout << str;
	unsigned int mask = 0x80000000; //לא התעלמנו!!
	while (mask)
	{
		cout << ((val & mask) != 0) ? '1' : '0';
		mask >>= 1;
	}
	cout << endl;
}


int main() {

	unsigned int getval;

	unsigned char a, b;

	cout << "Enter a number between 0 and 255: ";

	cin >> getval; a = getval;

	printBinary("a in binary: ", a);

	cout << "Enter a number between 0 and 255: ";

	cin >> getval; b = getval;

	printBinary("b in binary: ", b);

	printBinary("a | b = ", a | b);

	printBinary("a & b = ", a & b);

	printBinary("a ^ b = ", a ^ b);

	printBinary("~a = ", ~a);

	printBinary("~b = ", ~b);

	//An interesting bit pattern:

	unsigned char c = 0x5A;

	printBinary("c in binary: ", c);

	a |= c;

	printBinary("a |= c; a = ", a);

	b &= c;

	printBinary("b &= c; b = ", b);

	b ^= a;

	printBinary("b^=a; b = ", b);

	int x = 7;
	cout << ((x & 1) ? "yes" : "no");
	cout << ((x | 1) ? "yes" : "no");



	return 0;

}