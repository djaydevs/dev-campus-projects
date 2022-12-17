#include <stdio.h>
#include <conio.h>

int main()
{
   char gender;

   printf("Type 'F' for Female and 'M' for Male\n 'L' for Lesbian 'G' for Gay");
   printf("\nInput Gender: ");
   scanf("%c", &gender);

   if ((gender == 'M') || (gender == 'm'))
   {
      printf("Male");
      printf("Lalaki");
   }
   else if ((gender == 'F') || (gender == 'f'))
   {
      printf("Female");
   }
   else if ((gender == 'G') || (gender == 'g'))
   {
      printf("Gay");
   }
   else if ((gender == 'L') || (gender == 'l'))
   {
      printf("Lesbian");
   }
   else
   {
      printf("Invalid Input!");
   }

   return 0;
}