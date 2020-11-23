#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int *p = new int;
    delete p;
    p = new int;
}