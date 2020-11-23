#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float a, b, c, A, B, C;
    cin >> a >> b >> c >> A >> B >> C;
    if (a / b == A / B)
    {
        cout << "No Solution/Infinite Solutions" << endl;
        return 0;
    }
    float y = (C - ((A * c) / a)) / (((-A * b) / a) + B);
    float x = (c - (b * y)) / a;
    cout << x << endl;
    cout << y << endl;
}