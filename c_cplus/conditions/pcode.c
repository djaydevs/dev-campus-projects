/* Flores, Danny Jay M.
   BSIT-1B
   Application Activity for Lesson 1
   Amount of discount based on a product code.
*/
#include<stdio.h>
#include<conio.h>

int main()
{
//variables
char pcode;
float price,drate,dprice;

//input
printf("Please input the product code: ");
scanf("%c",&pcode);

//conditions
if ((pcode == 'A') || (pcode == 'a'))
    {
    price=450;
    drate=0.05;
    dprice=price*drate;
    printf("\nDiscount amount of A: %.2f",dprice);
    }
else if ((pcode == 'B') || (pcode == 'b'))
    {
    price=850;
    drate=0.10;
    dprice=price*drate;
    printf("\nDiscount amount of B: %.2f",dprice);
    }
else
    {
    printf("\nSorry, you've input an invalid product code.");
    }

return 0;
}