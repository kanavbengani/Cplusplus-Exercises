#include <iostream>

using namespace std;

int main()
{
    // Initializing, declaring array, and getting input for each element in 2d array
    int row, col, num;
    cout << "How many rows would you like your array to have: ";
    cin >> row;
    cout << "How many columns would you like your array to have: ";
    cin >> col;
    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
        for (int j = 0; j < col; j++)
        {
            cout << i << ", " << j << ": ";
            cin >> num;
            arr[i][j] = num;
        }
    }

    // Printing array
    for (int i = 0; i < row; i++)
    {
        for (int j = row - i; j > 0; j--)
        {
            for (int k = 0; k < col; k++)
            {
                cout << arr[i][k] << "\t";
            }
            cout << endl;
        }
        cout << "*****************************" << endl;
    }

    for (int i = 0; i < row; ++i)
    {
        delete[] arr[i];
    }
    delete[] arr;
}