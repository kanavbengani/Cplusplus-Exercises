#include <iostream>
using namespace std;

int main()
{
    int firstIndex = 2;
    int nextIndex = 1;
    const int capacity = 5;
    int data[capacity] = {1, 2, 3, 4, 5};
    int newData[10];

    int j = 0;
    int k = firstIndex;

    do
    {
        newData[j] = data[k];
        k = (k + 1) % capacity;
        j++;
    } while (k != nextIndex + 1);
    for (int i = 0; i < 10; i++)
    {
        cout << newData[i] << endl;
    }
}