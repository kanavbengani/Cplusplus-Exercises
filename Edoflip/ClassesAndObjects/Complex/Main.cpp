#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

#include "Class.cpp"

int main()
{
    int r1, i1, r2, i2;
    cout << "1st Real: ";
    cin >> r1;
    cout << "1st Imaginary: ";
    cin >> i1;
    cout << "2nd Real: ";
    cin >> r2;
    cout << "2nd Imaginary: ";
    cin >> i2;
    Expression E1(r1, i1);
    Expression E2(r2, i2);
    E1.multiply(E1, E2);
    E2.add(E1, E2);
}

// Add and multiply a + ib
// define class with addition and multiplication function.
// Have a main file which will return the values of the above function.