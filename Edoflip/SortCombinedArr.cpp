#include <iostream>

using namespace std;

int main()
{
    int asize, bsize, input;
    cout << "Array 1 Size: ";
    cin >> asize;
    cout << "Array 2 Size: ";
    cin >> bsize;
    int *a = new int[asize];
    int *b = new int[bsize];
    for (int i = 0; i < asize; i++)
    {
        cout << "What is input " << i << " for 1st array: ";
        cin >> input;
        *(a + i) = input;
    }
    for (int i = 0; i < bsize; i++)
    {
        cout << "What is input " << i << " for 2nd array: ";
        cin >> input;
        *(b + i) = input;
    }

    // Combine the two sorted arrays
    int aindex = 0, bindex = 0;
    int *result = new int[asize + bsize];
    for (int i = 0; i < (asize + bsize); i++)
    {
        if (*(a + aindex) < *(b + bindex))
        {
            *(result + i) = *(a + aindex);
            aindex++;
        }
        else
        {
            *(result + i) = *(b + bindex);
            bindex++;
        }
    }

    // Display Result Array
    for (int i = 0; i < (asize + bsize); i++)
    {
        cout << *(result + i) << ", ";
    }

    delete[] a;
    delete[] b;
    delete[] result;
}