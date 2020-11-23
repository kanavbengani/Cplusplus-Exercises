#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int a;
    int b = 0;
    cin >> a;

    while (a != 0)
    {
        a /= 10;
        b = b + 1;
    }

    cout << b;
}