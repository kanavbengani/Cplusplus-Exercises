#include <iostream>

using namespace std;

bool find(int guess, int a[], int size)
{
    if (size == 0)
    {
        return false;
    }
    if (a[0] == guess)
    {
        return true;
    }
    return find(guess, a + 1, size - 1);
}

int main()
{
    int guess, a[5] = {1, 2, 3, 4, 5};
    cin >> guess;
    cout << find(guess, a, 5) << endl;
}