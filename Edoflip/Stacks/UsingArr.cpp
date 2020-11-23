#include <iostream>
#include <climits>

using namespace std;

class StackUsingArr
{
private:
    int *data;
    int nextIndex;
    int capacity;

public:
    StackUsingArr(int sizeArr)
    {
        data = new int[sizeArr];
        nextIndex = 0;
        capacity = sizeArr;
    }
    int size()
    {
        return nextIndex;
    }
    bool isEmpty()
    {
        return nextIndex == 0;
    }
    void push(int element)
    {
        if (nextIndex == capacity)
        {
            cout << "Stack is full" << endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
    int top()
    {
        return data[nextIndex - 1];
    }
};

int main()
{
    StackUsingArr Arr1(4);
    cout << Arr1.isEmpty() << endl;
    Arr1.push(10);
    Arr1.push(20);
    Arr1.push(30);
    Arr1.push(40);
    Arr1.push(50);
    cout << Arr1.top() << endl;
    cout << Arr1.pop() << endl;
    cout << Arr1.size() << endl;
    cout << Arr1.isEmpty() << endl;
}