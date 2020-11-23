#include <iostream>

using namespace std;

int firstOccurance(int num, int a[], int size)
{
    if (size == 0)
    {
        return -1;
    }
    if (a[0] == num)
    {
        return num;
    }
}

int main()
{
    int num, a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cin >> num;
    firstOccurance(num, a, 10);
}