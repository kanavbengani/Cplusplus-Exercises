#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>

using namespace std;

void ReplacePI(char a[20])
{
    if (strlen(a) == 1)
    {
        return;
    }
    ReplacePI(a + 1);
    if (a[0] == 'P' && a[1] == 'i')
    {
        for (int i = strlen(a); i > 1; i--)
        {
            a[i + 2] = a[i];
        }
        a[0] = '3';
        a[1] = '.';
        a[2] = '1';
        a[3] = '4';
    }
}

int main()
{
    char a[20];
    cin >> a;
    ReplacePI(a);
    cout << a << endl;
}