#include <stdio.h>

int product(int p1, int p2) {
    int prod=p1*p2;
    return prod;
}

int main () {
    int x = 56, y = 7;
    printf("%d", product(x,y) );

    return 0;
}