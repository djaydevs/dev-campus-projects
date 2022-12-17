/* Danny Jay M. Flores
   BSIT-1B
   Unit 2: C++ Basics
   ASSIGNMENT/LEARNING INSIGHTS/REFLECTION
   Area of a Circle
*/
#include<stdio.h>
#include<conio.h>

int main()
{
  
 //variables
  float a,r,pi;
  a=0,r=0,pi=3.1416;
 //input
  printf("Please input the radius of circle: ");
  scanf("%f",&r);
  a=pi*r*r;
 //output
  printf("\nArea of the Circle: %.2f", a);

  return 0;
}
