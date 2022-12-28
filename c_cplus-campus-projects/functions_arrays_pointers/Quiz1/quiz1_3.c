#include <stdio.h>

int answer(int x, int y, int z) {
    int ans= ( (x*y)-z );
    ans = 5;
    return ans;
}
int main () {
    int a = 7, b= 3, c = 9;
    printf("%d", answer(a,b,c));
    return 0;
}