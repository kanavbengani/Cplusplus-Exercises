#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int factorial(int a)
{
    if (a == 0)
    {
        return 1;
    }
    int fact = factorial(a - 1) * a;
    return fact;
}

int main()
{
    int a;
    cin >> a;
    cout << factorial(a);
}