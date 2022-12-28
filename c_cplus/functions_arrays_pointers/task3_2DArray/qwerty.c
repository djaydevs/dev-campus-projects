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

    for (i = 1; i > 0; i--)
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