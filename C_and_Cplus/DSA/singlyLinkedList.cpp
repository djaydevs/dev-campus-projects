/*  Danny Jay M. Flores
    BSIT-2B
    Activity 2 - Singly Linked List (Data Structures & Algorithms)
    11/07/2021
*/

#include <iostream>

using namespace std;

int main()
{
    struct Node
    {
        int elements;
        struct Node *next;
    };

    struct Node *head = NULL;

    int items, inpElements;
    cout << "Enter number of items: ";
    cin >> items;

    for (int ctr = 1; ctr <= items; ctr++)
    {
        cout << "Enter data " << ctr << ": ";
        cin >> inpElements;

        Node *new_node;
        Node *nodePointer;
        new_node = new Node;
        new_node->elements = inpElements;
        new_node->next = NULL;

        if (head == NULL)
        {
            head = new_node;
        }
        else
        {
            nodePointer = head;

            while (nodePointer->next)
                nodePointer = nodePointer->next;
            nodePointer->next = new_node;
        }
    }

    cout << "\nThe linked list are: ";
    Node *PointerDisplay;
    PointerDisplay = head;

    while (PointerDisplay)
    {
        cout << PointerDisplay->elements << " ";
        PointerDisplay = PointerDisplay->next;
    }
    cout << endl;
    system("pause");
}