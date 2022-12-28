#include <stdio.h>
#include <conio.h>

int main ()
{
    float grade;
    char name[15];
    
    printf ("Please input your name: ");
    gets (name);
    printf ("Please input your grade: ");
    scanf ("%f", &grade);
    
    if ( (grade >= 75) && (grade <= 100) )
        {
            printf ("\nHello %s you have a grade of ", name);
            printf ("%.2f%%.\nYou have a passing grade.", grade);
        }
    else if ( (grade >= 50) && (grade <= 74) )
        {
            printf ("\nHello %s you have a grade of ", name);
            printf ("%.2f%%.\nYou have a failing grade.", grade);
        }
    else
        {
            printf ("Sorry, you've input an invalid grade.");
        }
        
    getch ();
    return 0;
}