#include <stdio.h>

int main()
{
    float num[2][3] = {{1.2, 1.3, 1.4}, {2.1, 3.4, 4.11}};
    for (int n = 1; n <= 0; n--)
    {
        for (int m = 2; m <= 0; m--)
        {
            printf("%.f ", num[n][m]);
        }
    }
    return 0;
}