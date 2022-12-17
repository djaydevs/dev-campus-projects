/*  Flores, Danny Jay M.
    BSIT-1B
    Unit 3 Lesson 1
    Determine if a number is positive, negative, or zero.
*/
#include <stdio.h>

int main ()
{
  //variable
  float num;
  
  //input
  printf ("Please input a number: ");
  scanf ("%f", &num);
  
  //conditions
  if (num > 0)
    {
      printf ("\n%.2f is a positive number.", num);
    }
  else if (num < 0)
    {
      printf ("\n%.2f is a negative number.", num);
    }
  else
    {
      printf ("\n%.f is exactly zero.", num);
    }

  return 0;
}