#include <stdio.h>

int main() {
    int n, first, last, temp, power = 1;
    scanf("%d", &n);

    temp = n;
    last = n % 10;

    while(temp >= 10) {
        temp /= 10;
        power *= 10;
    }

    first = temp;

    n = n - first * power - last;
    n = n + last * power + first;

    printf("%d", n);

    return 0;
}
