/*  Flores, Danny Jay M.
    BSIT-1B
    Unit 4 Lesson 4
    Void Function with no Parameters
*/

#include <stdio.h>

void compSalary();

int main () {

    compSalary();

    return 0;
}

void compSalary() {
    float rate, hours, salary;

    printf("Hours Worked: ");
    scanf("%f", &hours);
    printf("Rate: ");
    scanf("%f", &rate);

    salary = hours * rate;

    printf("Salary: %.2f", salary);

    return;
}