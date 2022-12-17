/* Danny Jay M. Flores
  BSIT-1B
  Unit 2: C++ Basics
  APPLICATION ACTIVITY FOR LESSON 4
  Problem #2
*/
#include<stdio.h>
#include<conio.h>

int main()
{
//variables
  float inch,cm;
  inch=0,cm=2.54;
//input
  printf("Please input the inch(es) value: ");
  scanf("%f",&inch);
  cm=inch*cm;
//output
  printf("\nThe equivalent cm value: %.2f cm", cm);

  return 0;
}