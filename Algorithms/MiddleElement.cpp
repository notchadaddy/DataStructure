//  the question was generate a program for a singly linked list, find middle of the linked list.
// If there are even nodes, then print second middle element.
// For example, if given linked list is 1->2->3->4->5 then output should be 3.
// If there are even nodes, then there would be two middle nodes, we need to print second middle element.
// For example, if given linked list is 1->2->3->4->5->6 then output should be 4.
#include <bits/stdc++.h>

using namespace std;

struct node
{
    int value;
    struct node *next;
};

node *createNode(int value)
{
    node *n1 = new node;
    n1->value = value;
    n1->next = NULL;
    return n1;
};

class LinkedList
{
    node *head;

public:
    LinkedList()
    {
        head = NULL;
    }
    void insertStart(int value)
    {
        node *n1 = createNode(value);
        if (head == NULL)
        {
            head = n1;
            return;
        }
        n1->next = head;
        head = n1;
    }

    // inserting element at the back

    void insertback(int value)
    {
        node *n1 = createNode(value);
        if (head == NULL)
        {
            head = n1;
            return;
        }
        node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = n1;
    }

    // Finding middle element of the given linked list

    void middleElement()
    {
        node *temp = head;
        node *temp2 = head;

        while (temp != NULL && temp->next != NULL)
        {
            temp = temp->next->next;
            temp2 = temp2->next;
        }
        cout << temp2->value;
    }

    // display linked list

    void displayAll()
    {
        if (head == NULL)
            cout << "UnderFlow";
        else
        {
            node *ptr = head;
            while (ptr != NULL)
            {
                cout << ptr->value << "->";
                ptr = ptr->next;
            }
            cout << endl;
        }
    }
};
int main()
{
    LinkedList L;

    L.insertStart(1);
    L.insertback(2);
    L.insertback(3);
    L.insertback(4);
    L.insertback(5);
    L.insertback(6);
    L.displayAll();
    L.middleElement();
    // L.displayAll();

    return 0;
}