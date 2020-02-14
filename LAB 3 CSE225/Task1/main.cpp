#include "Fraction.h"
#include "Fraction.tpp"
#include <iostream>

using namespace std;

int main()
{
    Fraction f1;
    Fraction f2(3,5);
    f1.setNumerator(2);
    f1.setDenominator(6);
    Fraction add=f1+f2;
    Fraction sub=f1-f2;
    Fraction mult=f1*f2;
    Fraction dev=f1/f2;
    add.print();
    sub.print();
    mult.print();
    dev.print();
    return 0;
}
