/*  Flores, Danny Jay M.
    BSIT-1B
    Unit 3 Lesson 2
    Program of area and perimeter of a rectangle.
*/
#include <stdio.h>
#include <conio.h>

int main () {
    int menu;
    float a, l, w, prm;
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
            printf("\n\nYou've chosen to find the area of rectangle.");
            printf("\n\nPlease insert the length of the rectangle: ");
            scanf("%f", &l);
            printf("Please insert the width of the rectangle: ");
            scanf("%f", &w);
            printf("\nArea of the Rectangle: %.2f", a = l * w);
            break;
        }
        case 2: {
            printf("\n\nYou've chosen to find the perimeter of rectangle.");
            printf("\n\nPlease insert the length of the rectangle: ");
            scanf("%f", &l);
            printf("Please insert the width of the rectangle: ");
            scanf("%f", &w);
            printf("\nPerimeter of the Rectangle: %.2f", prm = 2*l + 2*w);
            break;
        }
        default:
            printf("Invalid Input!");
    }
    return 0;
}