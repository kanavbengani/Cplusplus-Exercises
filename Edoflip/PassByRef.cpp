#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int add(int a, int b)
{
    a = 6;
    return a + b;
}

int main()
{
    int a = 5;
    int b = 7;
    cout << add(a, b) << endl;
    cout << a + b << endl;
}