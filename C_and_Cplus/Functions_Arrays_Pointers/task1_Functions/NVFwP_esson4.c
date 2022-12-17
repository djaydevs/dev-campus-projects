/*  Flores, Danny Jay M.
    BSIT-1B
    Unit 4 Lesson 4
    Non-Void Function with Parameters
*/

#include <stdio.h>

float compSalary(float r, float h);

int main () {
    float salary, hours, rate;
    printf("Hours Worked: ");
    scanf("%f", &hours);
    printf("Rate: ");
    scanf("%f", &rate);

    salary = compSalary(hours,rate);

    printf("Salary: %.2f", salary);

    return 0;
}

float compSalary(float r, float h) {
    float s;

    s = h * r;

    return s;
}