/*  Danny Jay M. Flores
 *  BSIT-2B
 *  F - Activity 2 - Num 1 - Linear Search
 *  01/27/2022
 */

#include <iostream>
using namespace std;

int main()
{ // curly braces added
    int arr[100], tot, i, num, arrTemp[50], j = 0, chk = 0;
    cout << "Enter the Size for Array Size: ";
    cin >> tot;
    cout << "Enter " << tot << " Array Elements: ";
    for (i = 0; i < tot; i++)
        cin >> arr[i];
    cout << "\nEnter the Number to Search: ";
    cin >> num;
    for (i = 0; i < tot; i++) // added
    {
        if (arr[i] == num) // added
        {
            arrTemp[j] = i;
            j++;
            chk++;
        }
    }
    if (chk > 0)
    {
        cout << "\nNumber Found at Index No. ";
        tot = chk; // added
        for (i = 0; i < tot; i++)
            cout << arrTemp[i] << " ";
    }
    else
        cout << "\nNumber doesn't Found!";
    cout << endl;
    return 0;
}