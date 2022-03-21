//שיעור 4  דוגמא 3
//שגיאת העמסה בפונקציה חברה

class Rational
{
    int numerator;    int denominator;
public:
    Rational(int mynumerator = 1, int mydenominator = 1) :numerator(mynumerator), denominator(mydenominator) {}

    Rational operator++(int);

    friend Rational operator++(Rational&, int);


};

Rational Rational::operator++(int u)
{
    Rational temp = *this;
    numerator += denominator;
    return temp;
}

Rational operator++(Rational& lhr, int u) {
    Rational temp = lhr;
    lhr.numerator += lhr.denominator;
    return temp;
}

int main()
{
    Rational num(1, 2);
    num.operator++(2);
    operator++(num, 2);
    num++;
}