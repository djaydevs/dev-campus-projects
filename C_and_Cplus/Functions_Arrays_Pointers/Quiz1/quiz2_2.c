#include <stdio.h>

int main () {
    int n1, n2=0;
    int values[7]={1,2,3,4,5,6,7};

    for (n1=0; n1>=6; n1++) {
        printf("%d %d ", n2, values[n1]);
    }
    return 0;
}