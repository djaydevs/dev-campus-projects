/*  Flores, Danny Jay M.
    BSIT-1B
    Unit 4 Lesson 3
    Tracing Output No. 1
*/

#include <stdio.h>

void function1 (int a, int b) {
    int c;
    c = a + b;

    printf("%d", c);
    
    return;
}

int main () {
    int x,y;
    x = 5; y = 10;
    
    function1(x,y);

    return 0;
}