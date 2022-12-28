/*  Flores, Danny Jay M.
    BSIT-1B
    Week 3 - Two Dimensional Array
    Practice Activity #1
*/

#include <stdio.h>

int main()
{
    float num[2][5];
    int i, j;

    printf("\nPlease input ten (10) numbers: ");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%f", &num[i][j]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        float temp = num[0][i];
        num[0][i] = num[1][i];
        num[1][i] = temp;
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%.2f\t", num[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}