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

Node *Input()
{
    int data;
    cin >> data;
    Node *head = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cin >> data;
    }
    return head;
}

void Eliminate(Node *head)
{
    Node *tempHead = head;
    while (tempHead->next != NULL)
    {
        if (tempHead->data == tempHead->next->data)
        {
            if (tempHead->next->next == NULL)
            { // IF LAST NODE == 2ND TO LAST NODE
                Node *p = tempHead->next->next;
                tempHead->next = NULL;
                delete p;
            }
            else
            {
                Node *p = tempHead->next;
                tempHead->next = tempHead->next->next;
                delete p;
            }
        }
        else
        {
            tempHead = tempHead->next;
        }
    }
}

void EliminateDuplicates(Node *head)
{
    Node *tempHead = head;
    if (tempHead == NULL)
    {
        return;
    }
    while (tempHead->next != NULL)
    {
        if (tempHead->data == tempHead->next->data)
        {
            Node *p = tempHead->next;
            tempHead->next = tempHead->next->next;
            delete p;
        }
        else
        {
            tempHead = tempHead->next;
        }
    }
}

void Print(Node *head)
{
    Node *tempHead = head;
    while (tempHead != NULL)
    {
        cout << tempHead->data << endl;
        tempHead = tempHead->next;
    }
}

int main()
{
    Node *head = Input();
    EliminateDuplicates(head);
    Print(head);
}