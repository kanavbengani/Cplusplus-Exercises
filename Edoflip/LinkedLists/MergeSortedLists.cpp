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

int lenOfNodes(Node *head)
{
    int length = 0;
    Node *tempHead = head;
    while (tempHead != NULL)
    {
        length++;
        tempHead = tempHead->next;
    }
    return length;
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

Node *Merge(Node *head1, Node *head2)
{
    Node *newHead = head1;
    Node *newTail = NULL;
    if (head2->data < head1->data)
    {
        newHead = head2;
        newTail = head2;
        head2 = head2->next;
    }
    else
    {
        newHead = head1;
        newTail = head1;
        head1 = head1->next;
    }
    while (head1->next != NULL || head2->next != NULL)
    {
        if (head2->data < head1->data)
        {
            newTail->next = head2;
            newTail = newTail->next;
            head2 = head2->next;
        }
        else
        {
            newTail->next = head1;
            newTail = newTail->next;
            head1 = head1->next;
        }
    }
    return newHead;
}

int main()
{
    cout << "Write input for list 1" << endl;
    Node *head1 = Input();
    cout << "Write input for list 2" << endl;
    Node *head2 = Input();
    Print(Merge(head1, head2));
}