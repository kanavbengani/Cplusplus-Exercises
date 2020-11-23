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

Node *Reverse(Node *head)
{
    if (head->next == NULL || head == NULL)
    {
        return head;
    }
    Node *temphead = Reverse(head->next);
    Node *temphead2 = temphead;
    while (temphead2->next != NULL)
    {
        temphead2 = temphead2->next;
    }
    temphead2->next = head;
    head->next = NULL;
    return temphead;
}

int main()
{
    int position;
    Node *head = Input();
    Print(Reverse(head));
}