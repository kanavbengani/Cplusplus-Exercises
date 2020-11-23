#include <iostream>

using namespace std;

int sum(int a[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    int b = sum(a + 1, size - 1);
    return a[0] + b;
}

int reverseSum(int a[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    int b = reverseSum(a, size - 1);
    return a[size - 1] + b;
}

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << reverseSum(a, 10);
}