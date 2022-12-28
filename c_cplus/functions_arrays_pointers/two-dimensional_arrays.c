/* TWO-DIMENSIONAL ARRAY 
    - an array of arrays, also taught as a table
    - think of it as a grid for representing chess board, city blocks, etc.
   
   TWO-DIMENSIONAL ARRAY DECLARATION 
   - indicates the number of number rows and the number of columns 
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int a[2][3] = // A 2 x 3 array = 6 elements
        {         //NESTED CURLY BRACES used to initialize elements row by row
         {3, 2, 6},
         {4, 5, 20}}; //or a[2][3] = { {3, 2, 6}, {4, 5, 20} };

    int k, j, sum;
    /* NESTED FOR LOOP traversing two-dimensional array */
    for (k = 0; k < 2; k++)
    {
        for (j = 0; j < 3; j++)
        {
            sum += a[k][j];
        }
    }
    printf("Sum: %d", sum);
}
