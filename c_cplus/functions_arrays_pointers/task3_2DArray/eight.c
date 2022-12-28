/*  Flores, Danny Jay M.
    BSIT-1B
    Week 3 - Two Dimensional Array
    Practice Activity #2
*/

#include <stdio.h>

int main()
{
    int i, j, a[3][5] = {{4, 8, 16, 32, 64}, {128, 256, 512, 1024, 2048}, {4091, 8182, 16364, 32728, 65456}};

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            a[i][j] *= 2;
            printf("%.d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}