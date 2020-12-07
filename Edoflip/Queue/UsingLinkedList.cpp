#include <iostream>

using namespace std;

template <typename T>

class Node
{
public:
    T data;
    Node<T> *next;
    Node(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

template <typename T>

class Queue
{
private:
    Node<T> *head;
    Node<T> *tail;
    int size;

public:
    Queue()
    {
        head = NULL;
        tail = NULL;
        size = 0;
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
        Node<T> *newNode = new Node<T>(element);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }
    T front()
    {
        if (head == NULL)
        {
            cout << "Queue is empty" << endl;
            return 0;
        }
        return head->data;
    }
    T dequeue()
    {
        if (head == NULL)
        {
            cout << "Queue is empty" << endl;
            return 0;
        }
        T temp = head->data;
        Node<T> *temp1 = head;
        head = head->next;
        size--;
        delete temp1;
        return temp;
    }
};

int main()
{
    Queue<int> Q1;
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