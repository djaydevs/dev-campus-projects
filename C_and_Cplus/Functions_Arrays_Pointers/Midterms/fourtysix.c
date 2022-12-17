#include <stdio.h>

int main()
{
    int result, x = 12;
    x--;
    printf(" Initial value of x = %d ", x);
    result = ((x == 11) || (x >= 12));
    printf(" Result of logical expression in this program is %d", result);
    return 0;
}