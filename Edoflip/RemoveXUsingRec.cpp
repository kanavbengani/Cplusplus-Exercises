#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>

using namespace std;

void RemoveX(char a[20])
{
    if (strlen(a) == 0)
    {
        return;
    }
    RemoveX(a + 1);
    if (a[0] == 'x')
    {
        for (int i = 1; i <= strlen(a); i++)
        {
            a[i - 1] = a[i];
        }
    }
}

int main()
{
    char a[20];
    cin >> a;
    RemoveX(a);
    cout << a << endl;
}