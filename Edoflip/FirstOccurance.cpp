#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int FirstOccurance(int arr[], int size, int index, int numToFind)
{
    if (index == size)
    {
        return -1;
    }
    if (arr[index] == numToFind)
    {
        return index;
    }
    return FirstOccurance(arr, 5, index + 1, numToFind);
}

int main()
{
    int arr[] = {2, 3, 4, 5, 4};
    int numToFind;
    cout << "What number would you like to find in the array: ";
    cin >> numToFind;
    cout << FirstOccurance(arr, 5, 0, numToFind);
}