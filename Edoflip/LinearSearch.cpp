#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int linearSearch(int a, int i[], int size)
{
    for (int j = 0; j < size; j++)
    {
        if (i[j] == a)
        {
            return j;
        }
    }
    return -1;
}

int main()
{
    int a;
    int i[5] = {1, 2, 3, 4, 5};
    cin >> a;
    cout << linearSearch(a, i, 5);
}