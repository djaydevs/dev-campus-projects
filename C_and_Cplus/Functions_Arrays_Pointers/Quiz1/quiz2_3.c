#include <stdio.h>

int main () {
    float y[]={2,0,7,0,9,0,3.0};
    int ss,z[]={78,93,44,35};

    for (ss=3; ss>=0; ss--) {
        printf("%d %.2f", z[ss],y[ss]);
    }
    return 0;
}