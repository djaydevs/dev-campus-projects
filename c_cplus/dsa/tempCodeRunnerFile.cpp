/*  Danny Jay M. Flores
    BSIT-2B
    Activity 1 - Creating Linked List (Data Structures & Algorithms)
    10/30/2021
*/

#include <iostream>

using namespace std;

struct Employee
{
    string name;
    double rate, nhw;
    struct Employee *next;
};

int main()
{
    //algorithms for adding a node
    struct Employee *head = NULL;

    Employee *newEmployee;
    newEmployee = new Employee;
    newEmployee->name = "Seth";
    newEmployee->rate = 250.00;
    newEmployee->nhw = 44.5;
    newEmployee->next = NULL;
    head = newEmployee;

    newEmployee = new Employee;
    newEmployee->name = "Renev";
    newEmployee->rate = 50.00;
    newEmployee->nhw = 30.50;
    newEmployee->next = NULL;
    head->next = newEmployee;

    //algorithm for displaying a node
    Employee *DisplayPtr = head;

    while (DisplayPtr)
    {
        cout << DisplayPtr->name << " -> ";
        cout << DisplayPtr->rate << " -> ";
        cout << DisplayPtr->nhw << endl;

        DisplayPtr = DisplayPtr->next;
        cout << endl;
    }
}