/*  Danny Jay M. Flores
    BSIT-2B
    Activity 2 - Doubly Linked List (Data Structures & Algorithms)
    11/07/2021
*/
#include <iostream>

using namespace std;

int main()
{
    //Creating structure Node
    struct Node
    {
        int elements;
        struct Node *prev; //pointer to previous elements
        struct Node *next; //pointer to next elements
    };

    struct Node *head = NULL;

    int items, inpElemeents;
    cout << "Enter number of items to input: ";
    cin >> items;

    //Adiing Nodes
    for (int ctr = 1; ctr <= items; ctr++)
    {
        cout << "Enter data " << ctr << ": ";
        cin >> inpElemeents;

        Node *new_node;
        Node *nodePointer;
        new_node = new Node;
        new_node->elements = inpElemeents;
        new_node->prev = NULL;
        new_node->next = head;

        if (head != NULL)
            head->prev = new_node;
        head = new_node;
    }
    //Displaying contents of linked list
    cout << "\nThe linked list are: ";

    Node *PointerDisplay;
    PointerDisplay = head;

    while (PointerDisplay != NULL)
    {
        cout << PointerDisplay->elements << " ";
        PointerDisplay = PointerDisplay->next;
    }
    cout << endl;
    system("pause");
}