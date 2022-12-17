#include <stdio.h>
#include <conio.h>

int main ()
{
    int c=5, no=10, yes=0;

    do 
    {
        yes=no % 2;
        printf ("%d",yes);
    }
    while (yes==0);
}