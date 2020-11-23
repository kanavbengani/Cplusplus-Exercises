#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

double power(double a, double b)
{
    if (b == 0)
    {
        return 1;
    }
    else if (b < 0)
    {
        return (1 / a) * power(a, b + 1);
    }
    else
    {
        return a * power(a, b - 1);
    }
}

int main()
{
    double a, b;
    cin >> a >> b;
    cout << power(a, b);
}
