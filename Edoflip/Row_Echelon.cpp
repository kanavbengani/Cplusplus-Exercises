#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float x1, x2, x3, x4, y1, y2, y3, y4, z1, z2, z3, z4;
    cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> z1 >> z2 >> z3;
    x1 /= x1;
    x2 /= x1;
    x3 /= x1;
    x4 /= x1;
    y1 -= x1 * y1;
    y2 -= x2 * y1;
    y3 -= x3 * y1;
    y4 -= x4 * y1;
}

// 1, 1, 1, 2
// 6, -4, 5, 31
// 5, 2, 2, 13