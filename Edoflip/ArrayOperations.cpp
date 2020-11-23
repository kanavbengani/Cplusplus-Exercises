#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    float c = a[0];

    for (int i = 1; i <= 4; i++)
    {
        c -= a[i];
    }

    cout << c;
}