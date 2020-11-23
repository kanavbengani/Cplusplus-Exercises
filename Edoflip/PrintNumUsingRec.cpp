#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int Num(int a)
{
    if (a == 0)
    {
        return 0;
    }
    Num(a - 1);
    cout << a << endl;
}

int main()
{
    int a;
    cin >> a;
    Num(a);
    cout << 1;
}

// Calculate the number of digits in a number using recursion. (NumOfDigRec.cpp)
// Calculate factorial using recursion. (FactorialUsingRec.cpp)
// Solving power of negative with for loop. (PowUsingRec.cpp)
// Multiply matrices.
