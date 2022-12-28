/*  Flores, Danny Jay M.
    BSIT-1B
    Unit 4 Lesson 3
    Tracing Output No. 3
*/

#include <stdio.h>

int function1 (int a) {
    int b,x;

    for (x=0; x<=3; x++) {
        b= b + a;
    }

    return a;
}

int main() {
    int i,j;

    i=2;
    j=function1(i);

    printf("%d", j);
    
    return 0;
}