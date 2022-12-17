#include <stdio.h>

int main () {
    int x,y=9-2;
    int variable1[10]={23,56,67,78,89,19,32,65,99,52};

    for ( x=5; x<=y; x++) {
        printf("%d", variable1[x]);
    }
    return 0;
}