#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

bool Sorted(int a[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (a[0] > a[1])
    {
        return false;
    }
    else
    {
        Sorted(a + 1, size - 1);
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    cout << Sorted(a, 5);
}

// If a string is palindrome or not using Recursion (PalStringRec.cpp)
// [2, 3, 4, 5, 4] using Recursion (FirstOccurance.cpp)
// Print number in reverse order (Ex: 5 -> 5, 4, 3, 2, 1) (PrintReverse.cpp)
