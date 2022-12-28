#include <stdio.h>

int main()
{
    int result, a = 12;
    a--;
    printf(" Initial value of a = %d ", a);
    result = ((a == 11) && (a >= 12));
    printf(" Result of logical expression in this program is %d", result);
    return 0;
}