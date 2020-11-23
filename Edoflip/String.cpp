#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char a[6] = "Kanav";
    int i = 0;

    while (a[i] != '\0')
    {
        i++;
    }

    cout << i;
}