#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void insertionSort(int a[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int j;
        int b = a[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (b < a[j])
            {
                a[j + 1] = a[j];
            }
            else
            {
                break;
            }
        }
        a[j + 1] = b;
    }
}

int main()
{
    int a[5] = {1, 6, 9, 3, 10};
    insertionSort(a, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }
}