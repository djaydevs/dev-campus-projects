/*  Flores, Danny Jay M.
    BSIT-1B
    Unit 4 Lesson 4
    A program that computes test scores and its average.
*/

#include <stdio.h>

float calcAverage(float s1, float s2, float s3, float s4, float s5);
void determineGrade(float ave);

int main () {
    float ts1, ts2, ts3, ts4, ts5, ave;

    printf("Please input the 1st test score: ");
    scanf("%f", &ts1);
    printf("Please input the 2nd test score: ");
    scanf("%f", &ts2);
    printf("Please input the 3rd test score: ");
    scanf("%f", &ts3);
    printf("Please input the 4th test score: ");
    scanf("%f", &ts4);
    printf("Please input the 5th test score: ");
    scanf("%f", &ts5);
    
    printf("\nTest scores average: %.2f\n", calcAverage(ts1, ts2, ts3, ts4, ts5) );
    ave = calcAverage(ts1, ts2, ts3, ts4, ts5);
    determineGrade(ave);

    return 0;
}

float calcAverage(float s1, float s2, float s3, float s4, float s5) {
    float ans;
    ans = ( (s1 + s2 + s3 + s4 + s5) /5);

    return ans;
}

void determineGrade(float ave) {
    float grade;

    grade = ave;

    if ( (grade >= 90) && (grade <= 100) ) {
        printf("Grade: A");
    }
    else if ( (grade >= 80) && (grade <= 89) ) {
        printf("Grade: B");
    }
    else if ( (grade >= 70) && (grade <= 79) ) {
        printf("Grade: C");
    }
    else if ( (grade >= 60) && (grade <= 69) ) {
        printf("Grade: D");
    }
    else if ( (grade < 60) && (grade >=0) ) {
        printf("Grade: E");
    }
    else {
        printf("Grade: Sorry, an error occurred.");
    }

    return;
}