#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int uniVal(int *a, int size)
{
    if (a[0] != a[1])
    { // Base Case #1 for First Index
        return a[0];
    }
    if (a[size - 1] != a[size - 2])
    { // Base Case #2 for Last Index
        return a[size - 1];
    }
    for (int i = 1; i < size - 1; i++)
    {
        if (a[i] != a[i - 1] && a[i] != a[i + 1])
        {
            return a[i];
        }
    }
    return -1;
}

int main()
{
    int *p = new int[10];
    for (int i = 0; i < 10; i++)
    {
        int b;
        cin >> b;
        *(p + i) = b;
    }
    int b = uniVal(p, 10);
    if (b == -1)
    {
        cout << "No Value is repeated only once." << endl;
    }
    else
    {
        cout << "The not repeated value is: " << b << endl;
    }
    delete p;
}