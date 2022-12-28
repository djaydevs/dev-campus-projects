/* Danny Jay M. Flores
   BSIT-1B
   Unit 2: C++ Basics
   APPLICATION ACTIVITY FOR LESSON 4
   Problem #1
*/
#include<stdio.h>
#include<conio.h>

int main()
{
//variables
  float rate,dollar,peso;
  rate=0,dollar=0,peso=50.00;
//input
  printf("Please input the dollar value: ");
  scanf("%f",&dollar);
  rate=dollar*peso;
//output
  printf("\nThe equivalent peso exchange rate: %.2f php", rate);
  
  return 0;
}