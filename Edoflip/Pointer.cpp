#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int a = 10;
    int *p = &a;
    int *k = p;
    cout << "a:  " << a << endl;
    cout << "&a: " << &a << endl;
    cout << "p:  " << p << endl;
    cout << "*p: " << *p << endl;
    cout << "&p: " << &p << endl;
    cout << "k:  " << k << endl;
    cout << "*k: " << *k << endl;
    cout << "&k: " << &k << endl;
}