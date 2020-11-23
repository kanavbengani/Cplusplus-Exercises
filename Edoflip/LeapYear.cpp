#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int a;
    bool b = false;

    while (b == false)
    {
        cout << "Type a year of your choice: ";
        cin >> a;
        if (a % 4 == 0)
        {
            cout << endl
                 << a << " is a leap year" << endl;
            break;
        }
        else
        {
            cout << endl
                 << a << " is not a leap year" << endl;
            break;
        }
    }
}