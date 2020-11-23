#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int Find0s(int num)
{
    if (num == 0)
    {
        return 0;
    }
    int a = num % 10;
    int smallOutput = Find0s(num / 10);
    if (a == 0)
    {
        return smallOutput + 1;
    }
    else
    {
        return smallOutput;
    }
}

int main()
{
    int num = 0102;
    cout << num << endl;
    cout << Find0s(num);
}