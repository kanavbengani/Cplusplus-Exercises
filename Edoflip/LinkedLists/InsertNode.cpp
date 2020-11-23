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

void Insert(Node *head, Node newNode, int position)
{
    Node *tempHead = head;
    for (int i = 0; i < position - 2; i++)
    {
        tempHead = tempHead->next;
    }
    newNode.next = tempHead->next;
    tempHead->next = &newNode;
}

int main()
{
    Node *head = Input();
    cout << "********************" << endl;
    //Insert Node
    int data, position;
    cin >> data;
    Node newNode(data);
    cin >> position;
    Insert(head, newNode, position);

    Print(head);
}