#include <stdio.h>

int main()
{
    int x = 30, y = 32;
    do
    {
        printf("%d ", x);
        x++;
        if (y < 35)
        {
            printf("%d ", y);
            y--;
        }
    } while (x <= 30);
    return 0;
}