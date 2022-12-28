/*  Danny Jay M. Flores
    BSIT-2B
    Activity 2 - Basic Operations in Linked List (Data Structures & Algorithms)
    11/07/2021
*/

#include <iostream>

using namespace std;

class ListOperations
{
public:
    int items;
    ListOperations *next;
};

void Display(ListOperations *data)
{
    while (data != NULL)
    {
        cout << data->items << " ";
        data = data->next;
    }
    cout << endl;
}

// Function for inserting node at the beginning
void Add_Start(struct ListOperations **h_ref, int new_items)
{
    struct ListOperations *new_node = (struct ListOperations *)malloc(sizeof(struct ListOperations));
    new_node->items = new_items;
    new_node->next = *h_ref;
    *h_ref = new_node;
}

void Add_End(struct ListOperations **h_ref, int new_items)
{
    struct ListOperations *new_node = (struct ListOperations *)malloc(sizeof(struct ListOperations));

    struct ListOperations *end = *h_ref;
    new_node->items = new_items;
    new_node->next = NULL;

    while (end->next != NULL)
        end = end->next;
    end->next = new_node;
}

void Del_Node(struct ListOperations **h_ref, int key)
{
    struct ListOperations *temp = *h_ref, *prev;

    if (temp != NULL && temp->items == key)
    {
        *h_ref = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->items != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
        return;

    prev->next = temp->next;
    free(temp);
}

int main()
{
    ListOperations *head_node = NULL;
    ListOperations *second_node = NULL;
    ListOperations *third_node = NULL;

    head_node = new ListOperations();
    second_node = new ListOperations();
    third_node = new ListOperations();

    head_node->items = 5;
    head_node->next = second_node;

    second_node->items = 4;
    second_node->next = third_node;

    third_node->items = 3;
    third_node->next = NULL;

    cout << "\nElements in the list: " << endl;
    Display(head_node);

    Add_Start(&head_node, 9);
    Add_Start(&head_node, 10);
    cout << "\nResult of list after insertion at the start: " << endl;
    Display(head_node);

    Add_End(&head_node, 101);
    Add_End(&head_node, 102);
    cout << "\nResult of list after insertion at the end: " << endl;
    Display(head_node);

    cout << "\nResult of list after deleting node: " << endl;
    Del_Node(&head_node, 101);
    Display(head_node);
    cout << endl;

    system("pause");
}