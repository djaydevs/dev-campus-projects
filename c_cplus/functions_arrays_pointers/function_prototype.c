#include <stdio.h>
#include <conio.h>

/* Function Prototype - variable declaration in C */
int square(int num); //return_type function_name(parameters);

int main()
{
    int x, result;

    x = 5;
    result = square(x); //actual parameters
    printf("%d squared is %d\n", x, result);

    return 0;
}
/* Function definition */
int square(int num)
{ //function body
    int y;

    y = num * num;

    return (y);
}
/* MULTIPLE PARAMETERS
int sum_up (int x, int y); //parameters in a declaration is a formal parameters

int main () {
    int x, y, result;

    x = 3;
    y = 12;
    result = sum_up(x, y);// x and y are arguments or parameters
    printf ("%d + %d = %d", x, y, result);

    return 0; 
}

int sum_up (int x, int y) {
    x += y;
    return(x);
}
*/