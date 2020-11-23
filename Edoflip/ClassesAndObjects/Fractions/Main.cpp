#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

#include "Class.cpp"

int main()
{
    int n1, d1, n2, d2;
    cout << "1st Numerator: ";
    cin >> n1;
    cout << "1st Denominator: ";
    cin >> d1;
    cout << "2nd Numerator: ";
    cin >> n2;
    cout << "2nd Denominator: ";
    cin >> d2;
    Fraction *F1 = new Fraction(n1, d1);
    Fraction *F2 = new Fraction(n2, d2);

    F1->multiply(*F1, *F2);
    F1->add(*F1, *F2);
    delete F1;
    delete F2;
}