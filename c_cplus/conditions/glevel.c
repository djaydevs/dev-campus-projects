#include<stdio.h>
#include<conio.h>

int main() {
    float glevel;
    printf("Please input the grade level: ");
    scanf("%f", &glevel);

    if ( ( glevel >= 1) && (glevel < 7) ) {
        printf("Elementary \ncolor is GREEN");
    }
    else if (glevel == 7) {
        printf("Grade 7 \ncolor is RED");
    }
    else if (glevel == 8) {
        printf("Grade 7 \ncolor is YELLOW");
    }
    else if (glevel == 9) {
        printf("Grade 9 \ncolor is BLUE");
    }
    else if (glevel == 10) {
        printf("Grade 10 \ncolor is VIOLET");
    }
    else if ( (glevel == 11) || (glevel == 12) ) {
        printf("Senior Hign School \n color is CYAN");
    }
    else {
        printf("Invalid Input!");
    }
    return 0;
}