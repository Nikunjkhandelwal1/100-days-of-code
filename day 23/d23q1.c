#include <stdio.h>

int main() {
    int n;
    float sum = 0;
    scanf("%d", &n);

    int num = 2, den = 3;

    for(int i = 1; i <= n; i++) {
        sum += (float)num / den;
        num += 2;
        den += 4;
    }

    printf("Approximate sum: %.2f", sum);

    return 0;
}
