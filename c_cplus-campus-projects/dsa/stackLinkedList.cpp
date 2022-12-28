/*  Danny Jay M. Flores
    BSIT-2B
    F - Activity 1 - Linked List Implementation of Stacks
    01/03/2022
*/

#include <iostream>
using namespace std;

struct Node
{
    int data;   // storing elements
    Node *link; // link pointer
};

Node *top; // top pointer
int ctr;   // increment or decrement size

void setListStack()
{
    top = NULL;
    ctr = 0;
} // not necessary

void Push(int element) // pushing new element (local)
{
    Node *temp = new Node(); // temporary new node pointer
    temp->data = element;    // storing element to data
    temp->link = top;        // linking element to top
    top = temp;              // updating top
    ctr++;                   // increment size
}

int Pop()
{
    int ret; // return variable
    if (top == NULL)
    {
        cout << "Stack underflow" << endl; // no element
    }
    else
    {
        ret = top->data;        // assigning return variable
        Node *temp = top->link; // pointing address of node to top
        delete top;
        top = temp; // updating top
        ctr--;      // decrement size
        return ret;
    }
}

int Top()
{
    return top->data;
}

int Size()
{
    return ctr;
}

bool isEmpty()
{
    // return (top==NULL) ? true : false; //ternary
    if (top == NULL)
        return true;
    else
        return false;
}

int main()
{
    try
    {
        if (isEmpty()) // checking
        {
            cout << "\nStack is empty\n\n";
        }

        // Push elements
        Push(100);
        Push(200);
        Push(300);

        // Size of stack
        cout << "Size of Stack = " << Size() << "\n\n";

        // Top element
        cout << "Top element is " << Top() << "\n\n";

        // Pop element
        cout << "Pop element is " << Pop() << "\n\n";

        // Display elements after pop
        cout << "After pop of last element" << endl;
        cout << "List elements are: ";
        Node *dispNode;
        dispNode = top;
        while (dispNode != NULL)
        {
            cout << dispNode->data << " "; // display elements
            dispNode = dispNode->link;     // asssign address to link
        }
        cout << "\n\n";

        // cout << "Pop element is " << Pop() << "\n\n";
        // cout << Pop() << "\n\n";
    }
    catch (const std::exception &e)
    {
        cout << "Some exception occured";
    }
    system("pause");
}