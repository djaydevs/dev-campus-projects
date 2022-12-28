/* Flores, Danny Jay M.
   BSIT-1B
   Application Activity for Lesson 1
   Amount of discount based on a product code & number.
*/
#include<stdio.h>
#include<conio.h>

int main ()
{
//variables
  char pcode;
  int pnum;
  float price, drate, dprice;

//input
  printf ("Please input the product code: ");
  scanf ("%c", &pcode);
  printf ("Please input the product number: ");
  scanf ("%d", &pnum);

//conditions
  if ((pcode == 'A') || (pcode == 'a'))
    { //second condition for pcode A/a
      if (pnum == 1) 
      {
	    price = 450;
	    drate = 0.05;
	    dprice = price * drate;
	    printf ("\nDiscount amount of A #1: %.2f", dprice);
	  }
      else if (pnum == 2) 
      {
	    price = 850;
	    drate = 0.10;
	    dprice = price * drate;
	    printf ("\nDiscount amount of A #2: %.2f", dprice);
	  }
      else 
      {
	    printf ("\nSorry, you've input an invalid product number on A.");
	  }
    }
  else if ((pcode == 'B') || (pcode == 'b'))
    { //second condition for pcode B/b
      if (pnum == 1) 
      {
	    price = 300;
	    drate = 0.03;
	    dprice = price * drate;
	    printf ("\nDiscount amount of B #1: %.2f", dprice);
	  }
      else if (pnum == 2) 
      {
	    price = 700;
	    drate = 0.06;
	    dprice = price * drate;
	    printf ("\nDiscount amount of B #2: %.2f", dprice);
	  }
      else 
      {
	    printf ("\nSorry, you've input an invalid product number on B.");
	  }
    }
  else
    {
      printf ("\nSorry, you've input an invalid product code.");
    }

  return 0;
}