#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int add(int a, int b, int c, int d = 0)
{
    return a + b + c + d;
}

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;

    cout << add(a, b, c, d);
}