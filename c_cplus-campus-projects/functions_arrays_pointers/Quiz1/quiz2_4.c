#include <stdio.h>

int main () {
    float no=2.0, numbers[4]= {1,9,1,6,2,0,3.1};
    int a = 3, b;

    for (b=a; b>=0l; b--){
        printf("%.2f", numbers[b]);
    }
    return 0;
}