#include <stdio.h>
#include <conio.h>

/* string ends with a NULL character

*/
int main()
{
    char city[40]; //char str_name[str_length] = "string";
    printf("Enter your favorite city: ");

    /*  STRING INPUT others are scanf() & gets()
        fgets arguments are
        str name, leng, pointer */
    fgets(city, 40, stdin); //stdin means STANDARD INPUT

    /* STRING OUTPUT others are printf() & puts()
        fputs arguments are
        str name, pointer */
    fputs(city, stdout); //stdout means STANDARD OUTPUT
    printf(" is a fun city.");

    return 0;
}