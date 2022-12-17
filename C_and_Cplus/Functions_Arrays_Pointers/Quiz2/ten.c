#include <stdio.h>

int main()
{
    float z[2][2] = {{11.65, 12.35}, {6.3, 2.7}};
    for (int n2 = 0; n2 <= 1; n2++)
    {
        for (int n1 = 0; n1 <= 1; n1++)
        {
            printf("%.2f\n", z[n1][n2]);
        }
    }
    return 0;
}