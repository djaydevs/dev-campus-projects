#include <stdio.h>

void compute_sum (float a, float b, float c) {
    float sum = a + b + c;
    printf("%.2f", sum);
}
int main () {
    float a = 1.6, b = 2.1, c= 4.5;
    compute_sum(a,b,c);
    return 0;
}