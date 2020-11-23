#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    const int sizeArray = 3;
    int a[sizeArray];
    int c;
    for (int i = 0; i < sizeArray; i++)
    {
        cout << endl
             << "What is Value " << i + 1 << ": ";
        cin >> c;
        a[i] = c;
    }
    for (int j = 0; j < sizeof(a) / sizeof(a[0]); j++)
    {
        int swapA[sizeof(a) / sizeof(a[0])] = {};
        swapA[j] = a[(sizeof(a) / sizeof(a[0])) - 1 - j];
        cout << swapA[j] << endl;
    }
}

/*
1-D
[1 2 3 ]a[0]=1

[3 2 1]a[0]=3
*/