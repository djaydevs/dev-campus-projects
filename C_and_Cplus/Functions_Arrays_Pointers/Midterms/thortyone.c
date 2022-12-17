#include <stdio.h>

int main()
{

    float num[5][2] = {{3.2, 5.7}, {9.7, 4.5}, {5.0, 6.8}, {1.5, 4.12}, {9.3, 5.25}};
    int b, a;
    for (b = 0; b < 5; b++)
    {
        for (a = 0; a < 2; a++)
        {
            printf("%f ", num[b][a] + 1.0);
        }
    }
    return 0;
}