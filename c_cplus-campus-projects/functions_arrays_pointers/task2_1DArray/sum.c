/*  Flores, Danny Jay M.
    BSIT-1B
    One Dimensional Array - Practice Activity #2
    Find the lowest and highest number, and sum.
*/

#include <stdio.h>

int main()
{
    float low, high, sum, num[5];
    int k;

    printf("Please input five (5) numbers: ");

    for (k = 0; k < 5; k++)
    {
        scanf("%f", &num[k]);
        sum = sum + num[k];
    }

    low = num[0];
    for (k = 1; k < 5; k++)
    {
        if (low > num[k])
        {
            low = num[k];
        }
    }
    printf("\nLowest number: %.2f", low);

    high = num[0];
    for (k = 1; k < 5; k++)
    {
        if (high < num[k])
        {
            high = num[k];
        }
    }
    printf("\nHighest number: %.2f", high);

    printf("\n\nSum of all numbers: %.2f", sum);

    return 0;
}

/*
    low = num[0];
    high = num [0];
    
    for (k = 1; k < 5; k++)
    {
        if (num[k] > high) {
            low = num[k];
        }
        if (num[k] < low) {
            low = num[k];
        }
    }
*/