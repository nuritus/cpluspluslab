#include "Rational.h"
#include <iostream>
using namespace std; 

Rational::Rational(int num, int denom) { numerator = num; denominator = denom; }
void Rational::print() { cout << numerator << '/' << denominator << endl; }
