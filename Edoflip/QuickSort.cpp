#include <iostream>

using namespace std;

int Partition(int arr[], int start, int end)
{

    int pivot = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    int temp = pivot;
    arr[start] = arr[start + count];
    arr[start + count] = temp;
    int i = start;
    int j = end;
    while (i != (start + count) && j != (start + count))
    {
        if (arr[i] > pivot && arr[j] <= pivot)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
        if (arr[j] > pivot)
        {
            j--;
        }
        if (arr[i] <= pivot)
        {
            i++;
        }
    }
    return start + count;
}

void QuickSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int smallOutput = Partition(arr, start, end);
    QuickSort(arr, start, smallOutput - 1);
    QuickSort(arr, smallOutput + 1, end);
}

int main()
{
    int a[5] = {45, 32, 1, 65, 29};
    QuickSort(a, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }
}