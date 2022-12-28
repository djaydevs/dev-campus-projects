#include<stdio.h>
#include<conio.h>

int main() {
    int glevel;

    printf("Please input the grade level: ");
    scanf("%d", &glevel);

    switch (glevel) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6: {
            printf("Elementary \ncolor is GREEN");
            break;
        }
        case 7: {
            printf("Grade 7 \ncolor is YELLOW");
            break;
        }
        case 8: {
            printf("Grade 8 \ncolor is RED");
            break;
        }
        case 9: {
            printf("Grade 9 \ncolor is BLUE");
            break;
        }
        case 10: {
            printf("Grade 10 \ncolor is VIOLET");
            break;
        }
        case 11:
        case 12: {
            printf("Senior High School \ncolor is CYAN");
            break;
        }
        default: {
            printf("Invalid Input");
            break;
        }
    } 
    return 0;
}