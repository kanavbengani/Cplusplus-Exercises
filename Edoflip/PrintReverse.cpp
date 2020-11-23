#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void PrintReverse(int a)
{
    if (a == 0)
    {
        return;
    }
    cout << a << endl;
    PrintReverse(a - 1);
}

int main()
{
    int a;
    cin >> a;
    PrintReverse(a);
}