#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int digCalc(int a)
{
    if (a == 0)
    {
        return 0;
    }
    int c = digCalc(a / 10) + 1;
    return c;
}

int main()
{
    int a;
    cin >> a;
    cout << digCalc(a);
}