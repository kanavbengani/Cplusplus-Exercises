#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Stack
{
private:
    Node *head;
    int size;

public:
    Stack()
    {
        head = NULL;
        size = 0;
    }
    int stackSize()
    {
        return this->size;
    }
    bool isEmpty()
    {
        return size == 0;
    }
    int top()
    {
        return head == NULL ? -1 : head->data;
    }
    void push(int element)
    {
        Node *newNode = new Node(element);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
        size++;
    }
    int pop()
    {
        if (head == NULL)
        {
            return -1;
        }
        else
        {
            int temp = head->data;
            Node *tempHead = head;
            head = head->next;
            size--;
            delete tempHead;
            return temp;
        }
    }
};

int main()
{
    Stack S;
    cout << S.isEmpty() << endl;
    S.push(100);
    S.push(200);
    cout << S.stackSize() << endl;
    cout << S.top() << endl;
    cout << S.pop() << endl;
    cout << S.stackSize() << endl;
    cout << S.top() << endl;
    cout << S.isEmpty() << endl;
}