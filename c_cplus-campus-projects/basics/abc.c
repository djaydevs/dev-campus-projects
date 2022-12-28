/* Programmed by Danny Jay M. Flores
   IT 1B
   Activity 1 Lesson 2
   Dec. 1, 2020
*/

#include <conio.h>
#include <stdio.h>

int main ()
{
   int a=1,b=2,c=3;
   a++;
   b=c++;
   a=c+b*2;
   c--;
   
   printf ("\n The equivalent value of a is %d", a);
   printf ("\n The equivalent value of b is %d", b);
   printf ("\n The equivalent value of c is %d", c);

   return 0;   
}