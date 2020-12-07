#include <iostream>
using namespace std;
template <typename T>

class QueueUsingArr
{
private:
    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;

public:
    QueueUsingArr(int s)
    {
        data = new T[s];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
        capacity = s;
    }
    int getSize()
    {
        return size;
    }
    bool isEmpty()
    {
        return size == 0;
    }
    void enqueue(T element)
    {
        if (size == capacity)
        {
            cout << "Queue is full" << endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex + 1) % capacity;
        if (firstIndex == -1)
        {
            firstIndex = 0;
        }
        size++;
    }
    T front()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return 0;
        }
        return data[firstIndex];
    }
    T dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return 0;
        }
        T temp = data[firstIndex];
        firstIndex = (firstIndex + 1) % capacity;
        size--;
        if (size == 0)
        {
            firstIndex = -1;
            nextIndex = 0;
        }
        return temp;
    }
};

int main()
{
    QueueUsingArr<int> Q1(6);
    cout << "isEmpty: " << Q1.isEmpty() << endl;
    Q1.enqueue(1);
    Q1.enqueue(2);
    Q1.enqueue(3);
    Q1.enqueue(4);
    Q1.enqueue(5);
    Q1.enqueue(6);
    Q1.enqueue(7);
    cout << "front: " << Q1.front() << endl;
    cout << "dequeue: " << Q1.dequeue() << endl;
    cout << "front: " << Q1.front() << endl;
    cout << "size: " << Q1.getSize() << endl;
    cout << "isEmpty: " << Q1.isEmpty() << endl;
}