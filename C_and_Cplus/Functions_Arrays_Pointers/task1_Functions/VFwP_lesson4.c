/*  Flores, Danny Jay M.
    BSIT-1B
    Unit 4 Lesson 4
    Void Function with Parameters
*/

#include <stdio.h>

void compSalary(float rate, float hours);

int main () {
    float h, r;
    printf("Hours Worked: ");
    scanf("%f", &h);
    printf("Rate: ");
    scanf("%f", &r);

    compSalary(h,r);

    return 0;
}

void compSalary(float rate, float hours) {
    float salary;

    salary = hours * rate;

    printf("Salary: %.2f", salary);

    return;
}