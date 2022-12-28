#include<stdio.h>
#include<conio.h>

int main()
{
    int v1, v2, answer;
    char choice;
    printf("Please input first number: ");
    scanf("%d", &v1);
    printf("Please input second number: ");
    scanf("%d", &v2);

    printf("\nMathemematical Operations\n");
    printf("[A] >>> Addition\n");
    printf("[B] >>> Subtraction\n"); 
    printf("[C] >>> Multiplication\n");
    printf("[D] >>> Division\n");
    printf("[E] >>> Reminder Division\n\n");
    printf("Enter your choice: ");
    scanf("%c", &choice);
    scanf("%c", &choice);

    switch (choice) {
        case 'A':
        case 'a': {
            answer= v1+v2;
            printf("The sum is %d",answer);
            break;
            }
        case 'B':
        case 'b': {
            answer= v1-v2;
            printf("The differrence is %d",answer);
            break;
            }
        case 'C':
        case 'c': {
            answer= v1*v2;
            printf("The product is %d",answer);
            break;
            }
        case 'D':
        case 'd': {
            answer= v1/v2;
            printf("The quotient is %d",answer);
            break;
            }
        case 'E':
        case 'e': {
            answer= v1%v2;
            printf("The remainder is %d",answer);
            break;
            }
        default: {
            printf("Invalid Input");
            break;
            }
        
    }
    return 0;
}