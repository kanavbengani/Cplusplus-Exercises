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

Node *InsertUsingRec(Node *head, int n, int data)
{
    if (n == 0)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        return head;
    }
    if (head == NULL)
    {
        return head;
    }
    head->next = InsertUsingRec(head->next, n - 1, data);
    return head;
}

int main()
{
    Node *head = Input();
    int n, data;
    cin >> n >> data;
    Print(InsertUsingRec(head, n, data));
}