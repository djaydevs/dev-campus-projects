#include <stdio.h>
#include <conio.h>

int main ()
{
    int sum, r;
    
    for (r = 5; r <= 20; r += 5)
    {
        sum= sum + r;
    }
    printf("The result is %d", sum);

    return 0; 
}