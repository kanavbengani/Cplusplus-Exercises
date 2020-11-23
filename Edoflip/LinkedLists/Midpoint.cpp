#include <iostream>
#include <stdio.h>
#include <stdlib.h>

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
    void Display()
    {
        cout << this->data << endl;
    }
};

void Print(Node *head)
{
    Node *tempHead = head;
    while (tempHead != NULL)
    {
        cout << tempHead->data << endl;
        tempHead = tempHead->next;
    }
}

Node *Input()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
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
        cin >> data;
    }
    return head;
}

int LengthUsingRecursion(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    int smallLength = LengthUsingRecursion(head->next);
    return smallLength + 1;
}

int Midpoint(Node *head, int length)
{
    for (int i = 0; i < ((length - 1) / 2); i++)
    {
        head = head->next;
    }
    return head->data;
}

int Midpoint1(Node *head)
{
    Node *fast = head;
    Node *slow = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow->data;
}

int main()
{
    Node *head = Input();
    cout << "Midpoint using length: " << Midpoint(head, LengthUsingRecursion(head)) << endl;
    cout << "Midpoint without using length: " << Midpoint1(head) << endl;
}
