#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void bubbleSort(int a[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int b = a[j];
                a[j] = a[j + 1];
                a[j + 1] = b;
            }
        }
    }
}

int main()
{
    int a[5] = {9, 18, 12, 20, 1};
    bubbleSort(a, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }
}