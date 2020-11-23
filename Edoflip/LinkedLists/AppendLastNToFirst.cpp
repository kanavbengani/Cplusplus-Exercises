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

Node *AppendLastN(Node *head, int length, int n)
{
    Node *temp = head;
    for (int i = 0; i < length - 1; i++)
    {
        temp = temp->next;
    }
    temp->next = head;
    temp = head;
    for (int i = 1; i < length - n; i++)
    {
        temp = temp->next;
    }
    Node *temp1 = temp->next;
    temp->next = NULL;
    head = temp1;
    return head;
}

int main()
{
    Node *head = Input();
    int n;
    cout << "What value of n: ";
    cin >> n;
    Print(AppendLastN(head, lenOfNodes(head), n));
}