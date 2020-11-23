#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int c = pow(a, .5);
    int b = 0;

    for (int i = 2; i <= c; i++)
    {
        if (a % i == 0)
        {
            cout << "It's not a prime number. " << endl;
            b = 1;
            break;
        }
    }
    if (b == 0)
    {
        cout << "It is a prime number. " << endl;
    }
}