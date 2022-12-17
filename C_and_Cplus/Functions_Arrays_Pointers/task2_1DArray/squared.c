/*  Flores, Danny Jay M.
    BSIT-1B
    One Dimensional Array - Practice Activity #1
    Squared of 8 numbers.
*/

#include <stdio.h>

int main()
{
    float square, num[8];
    int i;

    printf("Please input eight (8) numbers: ");

    for (i = 0; i < 8; i++)
    {
        scanf("%f", &num[i]);
    }

    printf("\nValue | Squared Value\n");
    printf("------|--------------\n");

    for (i = 0; i < 8; i++)
    {
        square = num[i] * num[i];
        printf("%.2f  | %.2f\n", num[i], square);
    }

    return 0;
}