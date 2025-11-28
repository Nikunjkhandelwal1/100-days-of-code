#include <stdio.h>

int main() {
    int a, b, lcm;
    scanf("%d %d", &a, &b);

    for(lcm = (a > b ? a : b); ; lcm++) {
        if(lcm % a == 0 && lcm % b == 0) {
            printf("%d", lcm);
            break;
        }
    }

    return 0;
}
