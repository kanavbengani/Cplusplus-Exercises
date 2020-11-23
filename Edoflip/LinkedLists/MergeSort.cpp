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

Node *Midpoint(Node *head)
{
    Node *fast = head;
    Node *slow = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

Node *mid_point(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
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

Node *merge(Node *head1, Node *head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    Node *newhead = NULL, *newtail = NULL;
    if (head1->data < head2->data)
    {
        newhead = head1;
        newtail = head1;
        head1 = head1->next;
    }
    else
    {
        newhead = head2;
        newtail = head2;
        head2 = head2->next;
    }
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data < head2->data)
        {
            newtail->next = head1;
            newtail = newtail->next;
            head1 = head1->next;
        }
        else
        {
            newtail->next = head2;
            newtail = newtail->next;
            head2 = head2->next;
        }
    }
    if (head1 != NULL)
    {
        newtail->next = head1;
    }
    if (head2 != NULL)
    {
        newtail->next = head2;
    }
    return newhead;
}

Node *MergeSort(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *Midpoint = mid_point(head);
    Node *half1 = head;
    Node *half2 = Midpoint->next;
    Midpoint->next = NULL;
    half1 = MergeSort(half1);
    half2 = MergeSort(half2);
    Node *finalHead = merge(half1, half2);
    return finalHead;
}

int main()
{
    int position;
    cout << "Enter input for array." << endl;
    Node *head = Input();
    Print(MergeSort(head));
}