#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int a[5] = {7, 9, 9, 1, 2};
    int b[5];
    int c = a[0];
    int d = 0;

    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            if (a[j] <= c)
            {
                c = a[j];
                d = j;
            }
        }
        b[i] = a[d];
        a[d] = 0;
        cout << b[i] << endl;
    }
}