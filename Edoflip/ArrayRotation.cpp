#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int size;
    cin >> size;
    int *p = new int[size];
    for (int i = 0; i < size; i++)
    {
        *(p + i) = i + 1;
    }
    int rotation;
    cin >> rotation;
    for (int i = rotation % size; i < size; i++)
    {
        cout << *(p + i) << ", ";
    }
    for (int i = 0; i < rotation % size; i++)
    {
        cout << *(p + i) << ", ";
    }
    delete[] p;
}