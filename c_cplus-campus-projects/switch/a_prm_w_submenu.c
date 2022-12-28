/*  Flores, Danny Jay M.
    BSIT-1B
    Unit 3 Lesson 2
    Program of area and perimeter with sub menus.
*/
#include <stdio.h>
#include <conio.h>

int main () {
    int menu, submenu_a, submenu_prm;
    float a, prm, r, s, s1, s2, s3, l, w;
    //Box Main Menu 
    {   printf("\n      Main Menu\n");
        printf("____________________\n");
        printf("|                  |\n");
        printf("|  [1] Area        |\n");
        printf("|  [2] Perimeter   |\n");
        printf("|__________________|\n");   
    }
    printf("\nPlease choose a number from the Main Menu: ");
    scanf("%d", &menu);

    switch (menu) {
        case 1: {
            printf("\n\nYou've chosen to find an Area.");
            //Box Sub-menu of Area 
            {   printf("\n\n Sub-menu of Area\n");
                printf("____________________\n");
                printf("|                  |\n");
                printf("|  [1] Circle      |\n");
                printf("|  [2] Square      |\n");
                printf("|__________________|\n");   
            }
            printf("\nNow, choose a number from the Sub-menu of Area: ");
            scanf("%d", &submenu_a);
            {   if (submenu_a == 1) {
                    printf("\nPlease input the radius of circle: ");
                    scanf("%f", &r);
                    printf("\nArea of Circle: %.2f", a = 3.1416 * r * r);    
                }
                else if (submenu_a == 2) {
                    printf("\nPlease input the side of square: ");
                    scanf("%f", &s);
                    printf("\nArea of Square: %.2f", a = s * s);     
                }
                else {
                    printf("Invalid Input!");
                }
            }
            break;
        }
        case 2: {
            printf("\n\nYou've chosen to find a Perimeter.");
            //Box Sub-menu of Perimeter 
            {   printf("\n\n  Sub-menu of Perimeter\n");
                printf("_________________________\n");
                printf("|                       |\n");
                printf("|  [1] Triangle         |\n");
                printf("|  [2] Rectangle        |\n");
                printf("|_______________________|\n");   
            }
            printf("\nNow, choose a number from the Sub-menu of Perimeter: ");
            scanf("%d", &submenu_prm);
            {   if (submenu_prm == 1) {
                    printf("\nPlease input the first side of triangle: ");
                    scanf("%f", &s1);
                    printf("Please input the second side of triangle: ");
                    scanf("%f", &s2);
                    printf("Please input the third side of triangle: ");
                    scanf("%f", &s3);
                    printf("\nPerimeter of Triangle: %.2f", prm = s1 + s2 + s3);    
                }
                else if (submenu_prm == 2) {
                    printf("\nPlease input the length of rectangle: ");
                    scanf("%f", &l);
                    printf("Please input the width of rectangle: ");
                    scanf("%f", &w);
                    printf("\nPerimeter of Rectangle: %.2f", prm = 2*l + 2*w);     
                }
                else {
                    printf("Invalid Input!");
                }
            }
            break;
        }
        default:
            printf("Invalid Input!");
    }  
    return 0;
}