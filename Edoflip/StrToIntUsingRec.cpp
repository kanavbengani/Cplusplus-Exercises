#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <math.h>

using namespace std;

int StrToInt(char a[20])
{
    if (strlen(a) == 1)
    {
        int b = a[0] - 48;
        return b;
    }
    int small = StrToInt(a + 1);
    int tempInteger = a[0] - 48;
    return small + (tempInteger * pow(10, strlen(a) - 1));
}

int main()
{
    char a[20];
    cin >> a;
    cout << StrToInt(a) << endl;
}