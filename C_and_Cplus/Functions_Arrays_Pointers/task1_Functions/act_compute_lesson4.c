/*  Flores, Danny Jay M.
    BSIT-1B
    Unit 4 Lesson 4
    Sum, difference, product, and quotient of two numbers.
*/
 
#include <stdio.h>
 
void calcSum(float s1, float s2);
void calcDifference(float d1, float d2);
void calcProduct(float p1, float p2);
void calcQuotient(float q1, float q2);

int main () {
    float num1, num2;
 
    printf("Please input the first number: ");
    scanf("%f", &num1);
    printf("Please input the second number: ");
    scanf("%f", &num2);
    
    calcSum(num1, num2);
    calcDifference(num1, num2);
    calcProduct(num1, num2);
    calcQuotient(num1, num2);
    
    return 0;
}
 
void calcSum(float s1, float s2) {
    
    printf("\nSum = %.2f\n", s1 += s2);
    return ;
}
 
void calcDifference(float d1, float d2) {
    printf("Difference = %.2f\n", d1 -= d2);
    return ;
}
 
void calcProduct(float p1, float p2) {
    printf("Product = %.2f\n", p1 *= p2);
    return ;
}
 
void calcQuotient(float q1, float q2) {
    printf("Quotient = %.2f\n", q1 /= q2);
    return ;
}