#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int add(int c, int d)
{
    cout << d;
    return c + d;
}

int main()
{
    int a;
    int b;
    int e;

    cin >> a;
    cin >> b;

    e = add(a, b);
    cout << e << endl;
}
