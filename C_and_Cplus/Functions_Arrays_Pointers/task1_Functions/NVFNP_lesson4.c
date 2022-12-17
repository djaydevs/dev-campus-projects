/*  Flores, Danny Jay M.
    BSIT-1B
    Unit 4 Lesson 4
    Non-Void Function without Parameters
*/

#include <stdio.h>

float compSalary();

int main () {
    float salary;
    
    salary = compSalary();

    printf("Salary: %.2f", salary);

    return 0;
}

float compSalary() {
    float r, h, s;

    printf("Hours Worked: ");
    scanf("%f", &h);
    printf("Rate: ");
    scanf("%f", &r);

    s = h * r;

    return s;
}