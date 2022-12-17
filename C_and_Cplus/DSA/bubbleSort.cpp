/*  Danny Jay M. Flores
 *  BSIT-2B
 *  F - Quiz/Activity - Category Matiyaga - Bubble Sort
 *  02/04/2022
 */
#include <iostream>
using namespace std;

void gSort(int a[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < (5 - i - 1); j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int myarray[5];
    int size = sizeof(myarray) / sizeof(myarray[0]); // size computation added
    cout << "Enter 5 integers in any order: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> myarray[i];
    }
    cout << "Before Sorting" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myarray[i] << " ";
    }
    myarray[size];  // added
    gSort(myarray); // function call added
    cout << endl
         << "After Sorting" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myarray[i] << " ";
    }
    return 0;
} // excess curly brace removed