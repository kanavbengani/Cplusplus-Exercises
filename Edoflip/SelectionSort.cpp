#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void selectionSort(int a[], int size)
{
    for (int j = 0; j < size - 1; j++)
    {
        int b = a[j];
        int i, c;
        for (int i = j; i < size; i++)
        {
            if (a[i] < b)
            {
                b = a[i];
                c = i;
            }
        }
        int d = b;
        a[c] = a[j];
        a[j] = d;
    }
}

int main()
{
    int a[6] = {24, 11, 8, 14, 13, 9};
    selectionSort(a, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << endl;
    }
}