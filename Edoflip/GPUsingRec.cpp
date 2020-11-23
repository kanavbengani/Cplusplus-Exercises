#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

float GP(int k)
{
    if (k == 0)
    {
        return 1;
    }
    float small = GP(k - 1);
    return (1 / pow(2, k)) + small;
}

int main()
{
    int k;
    cin >> k;
    cout << GP(k);
}