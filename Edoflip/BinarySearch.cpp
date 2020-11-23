#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int binarySearch(int a, int i[], int size)
{
    int b = 0;
    int c = size - 1;
    int e = 0;
    if (a == i[size - 1])
    {
        return size - 1;
    }
    while (true)
    {
        int d = (b + c) / 2;
        if ((b + c) % 2 != 0) // Helps to check smallest index (Index 0)
        {
            d--;
        }
        if (a < i[d])
        {
            c = d; // Sets larger value to middle value
        }
        else if (a > i[d])
        {
            b = d; // Sets smaller value to middle value
        }
        else // If a = i[d]
        {
            return d;
        }
        e++;
        if (e == size) // Returns if loop has run "size" times, which means value is not found.
        {
            return size;
        }
    }
}

int main()
{
    int a;
    int i[9] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
    int arrSize = (sizeof(i) / sizeof(i[0]));
    cout << "Enter the number you would like to find: ";
    cin >> a;
    if (binarySearch(a, i, arrSize) == arrSize) // If-else loop to check if value is found or not.
    {
        cout << "Value Not found." << endl;
    }
    else
    {
        cout << "Position: " << binarySearch(a, i, arrSize) + 1 << endl; // Returns position, not index.
    }
}