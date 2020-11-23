#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];

    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        *(a + i) = b;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    delete[] a;
}