#include <stdio.h>
#include <conio.h>

int fact(int n)
{
    if (n == 1) //base case or exit condition
    {
        return (1);
    }
    else
    {
        return (n * fact(n - 1)); //recursive call or call stack
    }
}

int main()
{
    int num;

    printf("Enter a number to calculate the factorial of: ");
    scanf("%d", &num);
    printf("The factorial of %d is %d", num, fact(num));

    return 0;
}