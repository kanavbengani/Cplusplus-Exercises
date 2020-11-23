#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int min(int a[], int size)
{
    int b = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] < b)
        {
            b = a[i];
        }
    }
    return b;
}

int max(int a[], int size)
{
    int b = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] > b)
        {
            b = a[i];
        }
    }
    return b;
}

int main()
{
    int a[5] = {0, 1, 2, 3, 4};
    cout << min(a, 5);
    cout << max(a, 5);
}