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

Node *printNth(Node *head, int position)
{
    Node *tempHead = head;
    for (int i = 0; i < position - 1; i++)
    {
        tempHead = tempHead->next;
    }
    return tempHead;
}

void printIthNode(Node *head, int position)
{
    int x = 0;
    Node *tempHead = head;
    while (tempHead != NULL)
    {
        if (x == position)
        {
            cout << tempHead->data << endl;
            break;
        }
        tempHead = tempHead->next;
        x++;
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

int main()
{
    int position;
    Node *head = Input();
    Print(head);
    cout << "Length of Nodes: " << lenOfNodes(head) << endl;
    cin >> position;
    cout << printNth(head, position)->data << endl;
}