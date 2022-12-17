/*ARRAY
    - a data structure that allows storage of a sequence of related values
    - it is useful because it represent related data with one descriptive name rather than using separate variables
*/
#include <stdio.h>
#include <conio.h>

int main()
{ //INDEX NUMBERS -->    0      1      2     (to access an array element refer to its index number or also called subscript)
    float purchases[3] = {10.99, 14.25, 90.50};
    //inside square bracket is the ARRAY SIZE, inside curly braces are ARRAY ELEMENTS or initial values
    float total = 0;
    int k;

    for (k = 0; k < 3; k++) //traversing the array with for loop 'cause it corresponds naturally to array indexes
    {
        total += purchases[k];
    }
    printf("Purchases total is %.2f\n", total);
}
/* ASSIGNMENT STATEMENT - changing the value of an array element
    int x[5] = {20, 45, 16, 18, 22};
    x[1] = 260;
    printf("The second element is %d\n", x[1]);
*/