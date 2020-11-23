#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    for (int i = 5; i >= 0; i--)
    {
        for (int k = i; k >= 0; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
}