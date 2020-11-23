#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    // Input for 1st Matrix
    cout << "1st Matrix" << endl;
    int a, b;
    cout << "Rows: ";
    cin >> a;
    cout << "Columns: ";
    cin >> b;
    int **c = new int *[a];
    for (int i = 0; i < a; i++)
    {
        c[i] = new int[b];
        for (int j = 0; j < b; j++)
        {
            cout << i << ", " << j << ": ";
            cin >> c[i][j];
        }
    }
    // Input for 2nd Matrix
    cout << endl
         << "2nd Matrix" << endl;
    int x, y;
    cout << "Rows: ";
    cin >> x;
    cout << "Columns: ";
    cin >> y;
    int **z = new int *[x];
    for (int i = 0; i < x; i++)
    {
        z[i] = new int[y];
        for (int j = 0; j < y; j++)
        {
            cout << i << ", " << j << ": ";
            cin >> z[i][j];
        }
    }
    // Multiplication:
    if (b == x)
    {
        int q, r, prod = 0;
        q = a;
        r = y;
        int **s = new int *[q];
        for (int i = 0; i < q; i++)
        {
            s[i] = new int[r];
            for (int j = 0; j < r; j++)
            {
                int prod = 0;
                for (int k = 0; k < b; k++)
                {
                    prod += c[i][k] * z[k][j];
                }
                s[i][j] = prod;
            }
        }
        for (int i = 0; i < q; i++)
        {
            for (int j = 0; j < r; j++)
            {
                cout << s[i][j] << ", ";
            }
            cout << endl;
        }

        delete[] c;
        delete[] z;
    }
    else
    {
        cout << "Multiplication is not possible with the above matrices. " << endl;
        delete[] c;
        delete[] z;
        return 0;
    }
}