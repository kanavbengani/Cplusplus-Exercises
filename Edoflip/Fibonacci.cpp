#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int a = 0;
    int b = 1;
    int c;

    cout << "How many digits?" << endl;
    cin >> c;

    cout << a << ", ";
    cout << b << ", ";

    for (int i = 0; i <= c - 2; i++)
    {
        cout << a + b << ", ";
        if (b <= a)
        {
            b = a + b;
        }
        else
        {
            a = a + b;
        }
    }
}