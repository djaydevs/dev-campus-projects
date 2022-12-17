/*  Flores, Danny Jay M.
    BSIT-1B
    Unit 4 Lesson 3
    Tracing Output No. 2
*/

#include <stdio.h>

int function1 (int x) {
    x += 5;

    return x;
}

int function2 (int y) {
    y *= 2;

    return y;
}

int main () {
    int a,b,c;
    
    a = 10;
    b = function1(a);
    c = function2(b);

    printf("%d + %d", c,b);

    return 0;
}