#include <stdio.h>
int main () 
{
    int num, count, sum=10; 
    
    printf("enter a positive integer: ");
    scanf("%d",&num);
    for (count=1;count<=num;count++)
    {
        sum+=count;
    }
    printf ("Sum is %d", sum);
}